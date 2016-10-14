/* Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets and braces. Don’t forget about quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.) */

/* TODO: make it nicer */

#include <stdio.h>

#define MAX_INPUT 1000

int getmyinput(char text[]);
int syntax_check(char* text);


/* global variables */

int parentheses = 0;
int brackets = 0;
int curly_braces = 0;
int quotes = 0;
int double_quotes = 0;
int comment = 0;

int syntax_check(char* text)
{
	int current_pos = 0;
	extern int parentheses;		/* ( ) */
	extern int brackets;		/* [ ] */
	extern int curly_braces;	/* { } */
	extern int quotes;		/* ' ' */
	extern int double_quotes;	/* " " */


	while (text[current_pos] != '\0'){
		if (text[current_pos] == '(') {
			parentheses++;
			current_pos++;
		} else if (text[current_pos] == ')') {
			parentheses--;
			current_pos++;
		} else if (text[current_pos] == '[') {
			brackets++;
			current_pos++;
		} else if (text[current_pos] == ']') {
			brackets--;
			current_pos++;
		} else if (text[current_pos] == '{') {
			curly_braces++;
			current_pos++;
		} else if (text[current_pos] == '}') {
			curly_braces--;
			current_pos++;
		} else if ((text[current_pos] == '\'') && (quotes > 0)) {
			quotes++;
			current_pos++;
		} else if ((text[current_pos] == '\'') && (quotes == 0)) {
			quotes--;
			current_pos++;
		} else if ((text[current_pos] == '\"') && (double_quotes > 0)) {
			double_quotes++;
			current_pos++;
		} else if ((text[current_pos] == '\"') && (double_quotes == 0)) {
			double_quotes--;
			current_pos++;
		} else if ((text[current_pos] == '/') && (text[current_pos+1] == '/')) {
			while (((text[current_pos] != '\n') || (text[current_pos] != '\0')) || (text[current_pos] != '\0'))
				current_pos++;
		} else if ((text[current_pos] == '/') && (text[current_pos+1] == '*')) {
			while (((text[current_pos] != '*') && (text[current_pos+1] != '/')) || (text[current_pos] != '\0'))
				current_pos++;
		} else
			current_pos++;
	}
	return 0;
}



int getmyinput(char text[])
{
	char c;
	int input_len = 0;

	while (((c = getchar()) != EOF) && (input_len < MAX_INPUT)) {
		text[input_len] = c;
		input_len++;
	}

	text[input_len+1] = '\0';

	return (input_len+1);
}

int main(int argc, char** argv)
{
	char text[MAX_INPUT];
	int input_len;
	extern int parentheses;
	extern int brackets;
	extern int curly_braces;
	extern int quotes;
	extern int double_quotes;

	input_len = getmyinput(text);

	syntax_check(text);

	printf("\nInput : %d\nint parentheses = %d;\nint brackets = %d;\nint braces = %d;\nint quotes = %d;\nint double_quotes = %d;",
			input_len,parentheses,brackets,curly_braces,quotes,double_quotes);

	return 0;
}

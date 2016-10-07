#include <stdio.h>

/*
 * Write a program detab that replaces tabs in the input with the proper number
 * of blanks to space to the next tab stop. Assume a fixed set of tab stops, 
 * say every n columns. Should n be a variable or a symbolic parameter?
 */

#define MAX_INPUT 1000
#define TAB_SIZE 8

int getinput(char text[])
{
	char c;
	int i = 0;

	while ((c = getchar()) != EOF) 
		text[i++] = c;
	
	i++;
	text[i] = '\0';

	return i;
}

void detab(char text[], int line_len)
{
	int counter = 0;

	for (int i = 0; i < line_len; i++) {
		if (text[i] == '\t') {
			for (int j = (i%TAB_SIZE); j < TAB_SIZE; j++) {
				putchar(' ');
			}
		} else if (text[i] == '\n') {
			counter = 0;
			putchar(text[i]);
		} else {
			counter++;
			putchar(text[i]);
		}
	}

}


int main(int argc, char** argv)
{
	char text[MAX_INPUT];
	int input_len = 0;

	input_len = getinput(text);
	
	detab(text,input_len);

	return 0;
}

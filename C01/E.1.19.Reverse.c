#include <stdio.h>

/*
 * Write a function reverse(s) that reverses the character string s. Use it to
 * write a program that reverses its input a line at a time.
 */

#define MAX_INPUT 1000

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

void reverse(char text2[], int line_len)
{
	char temp[MAX_INPUT];
	char c;
	int i = 0;
	int counter = 0;

	for (; i < line_len; i++) {
		if (text2[i] != '\n') {
			c = text2[i];
			temp[counter] = c;
			counter++;
		}
		
		if (text2[i] == '\n') {
			for (int j = 0; j < counter; j++) {
				c = temp[j];
				text2[i-1-j] = c;
			}
			counter = 0;
		}
	}
}



int main(int argc, char** argv)
{
	char text[MAX_INPUT];
	int input_len = 0;

	input_len = getinput(text);
	
	reverse(text,input_len);

	printf("%s",text);

	return 0;
}

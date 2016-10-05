#include <stdio.h>

#define MAX_LINELEN 1000

/* 
 * Write a program to print all input lines that are longer than 80 characters.
 * TODO: use functions ? 
 */


int main(int argc, char** argv)
{
	char c, text[MAX_LINELEN];	
	int i = 0;

	while ((c = getchar()) != EOF  ) {
		if (c != '\n') {
			text[i] = c;
			++i;
		}
		if (c == '\n' && i >= 5) {
			++i;
			text[i] = '\0';
			printf("%s\n",text);
			i = 0;
		} 
		if (c == '\n' && i < 5) 
			i = 0;
	}
}




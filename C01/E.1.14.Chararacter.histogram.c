#include <stdio.h>

#define ARRAY_SIZE 26
/*
 * Write a program to print a histogram of the frequencies of different characters in its input.
 */

int main(int argc,char** argv)
{
	char c;
	int wlength[ARRAY_SIZE];

	for (int i=0; i < ARRAY_SIZE; i++)
		wlength[i] = 0;

	while ( (c = getchar()) != EOF){
		if (c >= 'a' && c <= 'z'){
			wlength[ (c-'a') ]++;
		}
	}
	/*
	 * drawing vertical bars historgram
	 */
	printf("\n\n");

	for (int i = (ARRAY_SIZE-1); i > 0; i--){
		for (int j = 0; j < ARRAY_SIZE; j++)
			if (wlength[j] >= i)
				printf("|");
			else
				printf("+");
		printf("\n");
	}
	for (int i = 0; i < ARRAY_SIZE; i++)
		printf("-");

	printf("\n");

	for (int i = 0; i < ARRAY_SIZE; i++)
		printf("%c",'a'+i);

	printf("\n");
}


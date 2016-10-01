#include <stdio.h>

#define ARRAY_SIZE 10
/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

int main(int argc,char** argv)
{
	char c;
	int length;
	int wlength[ARRAY_SIZE];

	for (int i=0; i < ARRAY_SIZE; i++)
		wlength[i] = 0;

	while ( (c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t'){
			wlength[length]++;
			length=0;
		} else {
			length++;
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
		printf("%d",i);

	printf("\n");
}


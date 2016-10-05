#include <stdio.h>

/*
 * Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
 */

#define MAX_LINE 10000

int mygetline(char line[])
{
	char c;
	int i = 0;

	while ((c = getchar()) != EOF)  {
		line[i] = c;
		i++;
	}

	return i;
}

int main(int argc, char** argv)
{
	char text[MAX_LINE];
	int line_len = 0;

	line_len = mygetline(text);

	for (int i = line_len; i >= 0; i--)
		if (text[i] == '\n' && (text[i-1] == '\t' || text[i-1] == ' ' || text[i-1] == '\n') )
			for (int j = i ; j <= line_len; j++)
				text[j-1] = text[j];

	printf("%s",text);

	return 0;
}

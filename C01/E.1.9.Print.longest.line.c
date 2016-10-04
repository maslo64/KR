#include <stdio.h>

/* 
 * print longest line entered on input
 */

#define MAX_LINE 1000

int getl(char line[], int lim);
void copy(char max_line[], char line[]);

int getl(char line[], int lim)
{
	int j = 0;
	char c;

	for (; j < lim && (c = getchar()) != EOF && c != '\n'; j++)
		line[j] = c;
	
	if (c == '\n'){
		line[j]='\n';
		j++;
	}
	line[j]='\0';

	return j;
}

void copy(char max_line[], char line[])
{
	int i = 0;
	
	while ((max_line[i] = line[i]) != '\n')
		i++;
	
	max_line[i+1] = '\0';
}

int main(int argc, char** argv)
{
	int len = 0;	/* returned line lenght */
	int max = 0;	/* MAX line seen so far */
	char line[MAX_LINE];
	char longest[MAX_LINE];

	while ( (len = getl(line, MAX_LINE)) > 0)
		if (len > max){
			max = len;
			copy(longest, line);
		}
	
	printf("\n%s",longest);

	return 0;
}

/*
 * i<lim−1 && (c = getchar()) != ′\n′ && c != EOF
 * Write a loop equivalent to the for loop above without using && or ¦¦.
 */
//#while ((i<lim-1)+(c = getchar())+(c!=EOF))
#include <stdio.h>

/*
 * Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
 */

#define MAX_LINE 10000
#define lim 1000

int mygetline(char line[])
{
	char c = ' ';
	int i = 0;

	while (    (i<lim-1)+ ((c = getchar())=='\b')+ (c==EOF)) {
//	while (!( !(i<lim-1)+!((c = getchar())!='\b')+!(c!=EOF))) {
		line[i] = c;
		i++;
	}

	return i;
}

int main(int argc, char** argv)
{
	char text[MAX_LINE];

	mygetline(text);
	printf("%s",text);

	return 0;
}

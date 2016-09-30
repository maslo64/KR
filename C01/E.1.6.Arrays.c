#include <stdio.h>

/* list digits , count whitespaces, sum all others */

int main(int argc, char** argv)
{
	char c;
	int digits[10];
	int ndigits = 0;
	int nwhite = 0;
	int nothers = 0;

	while( (c = getchar()) != EOF) 
		if ( c >= '0' && c <= '9' )
			digits[ndigits++] = c;
		else if ( c == ' ' || c == '\t' || c == '\n' )
			++nwhite;
		else
			++nothers;

	printf("\nDigits: ");
	for (int i = 0 ;i <= ndigits ;i++)
		printf("%c ",digits[i]);
	printf("\nnrDigits:%d\nOthers : %d\nWhitespaces : %d\n",ndigits,nothers,nwhite);
}
		


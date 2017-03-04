/* Exercise 2-1. Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types. */

#include <stdio.h>
#include <limits.h>
#include <float.h>

#define BELL '\007'

int main(int argc, char** argv)
{
	printf("\n/usr/lib64/gcc/x86_64-suse-linux/6/include-fixed/limits.h\n");

	printf("char bits	: CHAR_BIT	: %d\n",CHAR_BIT);
	printf("\n");

	printf("signed char	: sizeof char	: %zu\n",sizeof(char));
	printf("signed char	: SCHAR_MIN	: %d\n",SCHAR_MIN);
	printf("signed char	: SCHAR_MAX	: %d\n",SCHAR_MAX);
	printf("\n");

	printf("signed char	: sizeof char	: %zu\n",sizeof(unsigned char));
	printf("unsigned char	: UCHAR_MAX	: %d\n",UCHAR_MAX);
	printf("unsigned char	: N/A MIN  	: 0\n");
	printf("\n");

	printf("signed int		: sizeof int	: %zu\n",sizeof(int));
	printf("unsigned short int	: N/A MIN	: 0\n");
	printf("unsigned short int	: USHRT_MAX	: %d\n",USHRT_MAX);
	printf("\n");

	printf("signed int	: INT_MIN	: %d\n",INT_MIN);
	printf("signed int	: INT_MAX	: %d\n",INT_MAX);
	printf("\n");

	printf("unsigned int	: N/A_MIN	: 0\n");
	printf("unsigned int	: UINT_MAX	: %u\n",UINT_MAX);
	printf("\n");

	printf("signed long int	: sizeof long int: %zu\n",sizeof(long));
	printf("signed long int	: LONG_MIN	: %ld\n",LONG_MIN);
	printf("signed long int	: LONG_MAX	: %ld\n",LONG_MAX);
	printf("\n");

	printf("unsigned long int	: N/A_MIN	: 0\n");
	printf("unsigned long int	: ULONG_MAX	: %lu\n",ULONG_MAX);
	printf("\n");

	printf("signed long long int	: LLONG_MIN	: %lld\n",LLONG_MIN);
	printf("signed long long int	: LLONG_MAX	: %lld\n",LLONG_MAX);
	printf("\n");

	printf("unsigned long int	: N/A_MIN	: 0\n");
	printf("unsigned long int	: ULLONG_MAX	: %llu\n",ULLONG_MAX);



	return 0;
}


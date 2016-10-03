#include <stdio.h>

/*
 * Write program to print power of number using functions
 */

int power(int base, int n)
{
	/*
	 * function to make actual computation
	 */

	int i,p;

	p = 1;

	for (i = 1; i <= n; i++)
		p = p * base;

	return p;
}


int main(int argc, char** argv)
{
	for (int i = 0; i < 10; i++)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));

	return 0;
}

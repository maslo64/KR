#include <stdio.h>

/* print Fahrenheit-Celsius table    for fahr = 0, 20, ..., 300 */

int convertF2C(int farenheit)
{
	return ( 5 * (farenheit - 32) / 9);
}


int main(int argc, char** argv)
{
	for (int i = 0; i <= 300; i+=20)
		printf("%d\t%d\n", i, convertF2C(i) );
}

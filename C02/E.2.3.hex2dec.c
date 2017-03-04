#include <stdio.h>
#include <math.h>

/*
 * Write the function htoi(s), which converts a string of hexadecimal digits
 * (including an optional 0x or 0X) into its equivalent integer value.
 * The allowable digits are 0 through 9, a through f, and A through F.
 */

#define MAX_LINE 10000
#define lim 1000
#define HEXA 10
#define HEXB 11
#define HEXC 12
#define HEXD 13
#define HEXE 14
#define HEXF 15

int mygetline(char line[])
{
	char c = ' ';
	int i = 0;
	while ( (i<lim-1) && ((c = getchar()) !='\b') && (c != EOF) ) {
		line[i] = c;
		i++;
	}

	return i;
}

signed long convert2dec(char *line,int text_len)
{
	long decimal = 0;
	int included_0x = 0;
	int cislo = 0;
	int counter = 0;

	if ( (line[0] == '0') && (line[1] == 'x' || line[1] == 'X') ) {
		included_0x = 2;
	}

	for (int i = text_len-1 ; i >= (0+included_0x); i--) {
		if ((line[i] >  '0') && (line[i] <  '9')) cislo = line[i] - 48;
		if ((line[i] >= 'a') && (line[i] <= 'f')) cislo = line[i] - 87;
		if ((line[i] >= 'A') && (line[i] <= 'F')) cislo = line[i] - 55;
		decimal += cislo*((int)pow(2.0,counter));
		counter += 4;
	}
	return decimal;

}

int main(int argc, char** argv)
{
	char text[MAX_LINE];
	int text_len=0;


	printf("Text to be converted : ");
	text_len = mygetline(text);
	printf("\nOriginal : %s",text);


	printf("\nHex      : %lu\n",convert2dec(text,text_len));


	return 0;
}

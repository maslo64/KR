#include <stdio.h>

/*
 * Write a program entab that replaces strings of blanks by the minimum number
 * of tabs and blanks to achieve the same spacing. Use the same tab stops as
 * for detab. When either a tab or a single blank would suffice to reach a
 * tab stop, which should be given preference?
 */

#define MAX_LINE 1000
#define TAB_SIZE 8

int getinput(char text[]);
int replace_tabs(char text[], int line_len);

int getinput(char text[])
{
	char c;
	int i = 0;

	while ((c = getchar()) != EOF)
		text[i++] = c;

	i++;
	text[i] = '\0';

	return i;
}

int replace_tabs(char text[], int line_len)
{
	int space_counter = 0;

	for (int i = 0 ; i < line_len; i++) {
		if (text[i] == '\n') {
			space_counter++;
		}
		if (space_counter == TAB_SIZE) {
			text[i-TAB_SIZE] = '\t';
			for (int j = i; j < line_len; j++) {
				text[j-TAB_SIZE+1] = text[j];
				line_len--;
			}
		}
	}

	return line_len;
}

int main(int argc, char** argv)
{
	char text[MAX_LINE];
	int line_len = 0;

	line_len = getinput(text);

	line_len = replace_tabs(text,line_len);

	printf("%s",text);

	return 0;
}

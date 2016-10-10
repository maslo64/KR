/*
 * Write a program to “fold” long input lines into two or more shorter
 * line after the last non-blank character that occurs before the n-th
 * column of input. Make sure your program does something intelligent
 * with very long lines, and if there are no blanks or tabs before the
 * specified column.
 */

#include <stdio.h>

#define MAX_INPUT 1000
#define MAX_ROW 8
#define MAX_LINE_LEN 10

int getmyinput(char text[]);
int fold(char text[], int input_len);

int getmyinput(char text[])
{
	char c;
	int input_len = 0;

	while (((c = getchar()) != EOF) && (input_len < MAX_INPUT)) {
		text[input_len] = c;
		input_len++;
	}
	text[input_len] = '\0';
	text[input_len+1] = '\0';
	return input_len++;
}

int fold(char text[], int input_len)
{
	int current_pos = 0;
	int current_len = input_len;
	int fold_executed = 0;
	char temp_char;
	char temp_char2;
	char temp_char3;
	char temp_char4;

	while ((current_len - current_pos) > MAX_LINE_LEN) {
		current_pos += MAX_LINE_LEN;
		fold_executed = 0;
		for (int i = 0; i < MAX_ROW; i++)
			if ((text[current_pos-i] == ' ') || (text[current_pos-i] == '\t')) {
				text[current_pos-i] = '\n';
				current_pos = current_pos-i;
				fold_executed = 1;
				break;
			}
		if (fold_executed == 0) {
			current_len += 2;
			temp_char = text[current_pos];
			temp_char2 = text[current_pos+1];
			text[current_pos] = '-';
			text[current_pos+1] = '\n';

			current_pos += 2;
			for (int j = current_pos; j < current_len; j++) {
				temp_char3 = text[j];
				temp_char4 = text[j+1];
				text[j] = temp_char;
				text[j+1] = temp_char2;
				temp_char = temp_char3;
				temp_char2 = temp_char4;
			}
		}
	}

	text[current_len] = '\0';
	return current_len;
}


int main(int argc, char** argv)
{
	char text[MAX_INPUT];
	int input_len,final_len;

	input_len = getmyinput(text);

	printf("\nBefore\n%d :\n%s",input_len, text);

	final_len = fold(text, input_len);

	printf("\nAfter\n%d :\n%s",final_len, text);

	return 0;
}

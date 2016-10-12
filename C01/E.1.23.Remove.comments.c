/* Write a program to remove all comments from a C program. Don’t forget to handle quoted strings and character constants properly. C comments do not nest.*/

#include <stdio.h>

#define MAX_INPUT 1000

int getymyinput(char text[]);
int remove_comments(char text[], int input_len);
void remove_one_char(char text[], int pos_to_remove);

void remove_one_char(char text[], int pos_to_remove)
{
	int i = pos_to_remove;

	while (text[i] != '\0') {
		text[i] = text[i+1];
		i++;
	}

	return ;
}

int remove_comments(char text[], int input_len)
{
	int current_len = input_len;

	for (int i = 0; i < current_len; i++) {
		if ((text[i] == '/') && (text[i+1] == '*')) {
			remove_one_char(text, i);
			remove_one_char(text, i);
			current_len -= 2;

			for (int j = i; j < current_len;) {
				if ((text[j] == '*') && (text[j+1] == '/')) {
					remove_one_char(text, j);
					remove_one_char(text, j);
					current_len -=2;
					j = current_len;
				} else {
					remove_one_char(text, j);
					current_len--;
				}
			}
		}
		if ((text[i] == '/') && (text[i+1] == '/'))
			while ((text[i] != '\n') && (text[i] != '\0')) {
				remove_one_char(text, i);
				current_len--;
			}
	}

	return current_len;
}


int getmyinput(char text[])
{
	char c;
	int input_len = 0;

	while (((c = getchar()) != EOF) && (input_len < MAX_INPUT)) {
		text[input_len] = c;
		input_len++;
	}

	text[input_len+1] = '\0';

	return (input_len+1);
}

int main(int argc, char** argv)
{
	char text[MAX_INPUT];
	int input_len = 0;

	input_len = getmyinput(text);

	remove_comments(text,input_len);

	printf("\n: %s", text);

	return 0;
}

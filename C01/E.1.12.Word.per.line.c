#include <stdio.h>

int main(int argc,char** argv)
{
	char c;

	while( (c=getchar()) != EOF){
		if( c == ' ' || c == '\t' || c == '\n' )
			c = '\n';
		putchar(c);
	}
}

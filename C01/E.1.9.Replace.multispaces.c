#include<stdio.h>

int main(int argc,char** argv)
{
	char c;
	typedef enum { false, true } bool;

	bool already_space=false;

	while( (c=getchar()) != EOF){
		if ( c != ' ' || already_space==false){
			putchar(c);
			if( c == ' ')
				already_space=true;
			else already_space=false;
		}
	}
}

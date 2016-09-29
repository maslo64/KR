#include <stdio.h>

#define IN	1
#define OUT	0

int main(int argc,char** argv)
{
	char c;
	int nl,nw,nc,state;

	state = OUT;
	nc = nw = nl = 0;

	while ( (c=getchar()) != EOF){
		++nc;
		if ( c == '\n' )
			++nl;
		if ( c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}

	printf("\n=======================\nNewline:\t%d\nWords:\t\t%d\nCharacters:\t%d\n", nl, nw, nc);
}

			

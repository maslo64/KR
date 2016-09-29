#include <stdio.h>

int main(int argc,char** argv)
{
	int nl,c;

	c = 0;
	nl = 0;

	while((c=getchar()) != EOF)
		if(c=='\n')
			++nl;
	
	printf("%d\n",nl);
}

	


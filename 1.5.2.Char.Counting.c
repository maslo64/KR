#include <stdio.h>

int main(int argc,char** argv)
{
	int nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;

	printf("%d\n",nc);

}


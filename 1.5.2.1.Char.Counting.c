#include<stdio.h>

int main(int argc,char** argv)
{
	double nc;

	nc = 0;

	for(;getchar() != EOF; ++nc)
		;

	printf("%.0f",nc);
}

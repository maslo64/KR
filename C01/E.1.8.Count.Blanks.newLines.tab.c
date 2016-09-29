#include<stdio.h>

int main(int arvc,char** argv)
{
	int cBlanks = 0;
	int cTabs = 0;
	int cNewlines = 0;
	char c;

	while( (c=getchar()) != EOF){
		if(c == '\t')
			++cTabs;
		else if(c == '\n')
			++cNewlines;
		else if(c == ' ')
			++cBlanks;
	}

	printf("====================\nTabs:\t\t%d\nNewlines:\t%d\nBlanks:\t\t%d\n",cTabs,cNewlines,cBlanks);
}

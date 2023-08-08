#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int i,sum=0;
	char a[102];
	gets(a);
	if(a[0]=='I'&&a[1]=='O'&&a[2]=='I'&&a[3]==NULL)
	{
		printf("IOI is the International Olympiad in Informatics.");
		return 0;
	}
	printf("I don't care.");
	return 0;
}

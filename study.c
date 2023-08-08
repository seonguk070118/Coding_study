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
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='l'&&a[i+1]=='o'&&a[i+2]=='v'&&a[i+3]=='e')
		{
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}

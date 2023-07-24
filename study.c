#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	char a[91]={0};
	int i,j,sum=0;
	gets(a);
	for(i=97;i<123;i++)
	{
		for(j=0;j<strlen(a);j++)
		{
			if(i==a[j])
			{
				sum++;
			}
		}
		printf("%c:%d\n",i,sum);
		sum=0;
	}
	return 0;
}

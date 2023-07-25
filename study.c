#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,i,j;
	scanf("%d",&a);
	int k=a/2;
	for(i=1;i<=a;i+=2)
	{
		for(j=k;j>=1;j--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
		k--;
	}
	return 0;
}

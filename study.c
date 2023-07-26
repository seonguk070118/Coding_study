#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		printf("**\n");
	}
	return 0;
}

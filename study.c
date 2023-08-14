#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,i,j=0;
	scanf("%d",&a);
	for(i=1;i<=a*a;i++)
	{
		printf("%d ",i);
		j++;
		if(j==a)
		{
			printf("\n");
			j=0;
		}
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=0;j<i;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
    	for(j=i;j>=1;j--){
    		printf("*");
		}
		printf("\n");
	}
	return 0;
}

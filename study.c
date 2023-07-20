#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int i,n,k,j;
	scanf("%d",&n);
	for(i=1;;i++)
	{
		k=n-i;
		for(j=k;j>=0;j--){
			if(j*j==k)
			{
				printf("%d %d",i,j);
				return 0;
			}
		}
	}
}

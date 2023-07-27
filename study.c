#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<=(i)/2;j++)
			{
				if(i%j==0)
				{
					break;
				}
			}
			
			for(k=2;k<=(n/i)/2;k++)
			{
				if((n/i)%k==0)
				{
					break;
				}
			}
			
			if(j==i/2+1&&k==(n/i)/2+1)
			{
				printf("%d %d",i,n/i);
				return 0;
			}
		}
	}
	printf("wrong number");
	return 0;
}

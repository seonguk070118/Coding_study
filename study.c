#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <stdbool.h>


int main()
{
    int n,i=0,sum=1;
    scanf("%d",&n);
    printf("1");
    for(i=2;i<n;i++)
    {
    	if(n%i==0)
    	{
    		sum+=i;
    		printf(" + %d",i);
		}
	}
	printf(" = %d",sum);
    return 0;
}

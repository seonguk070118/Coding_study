#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>


int main()
{
	int a,i,b,c,sum=0,d;
	scanf("%d",&d);
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d %d",&b,&c);
		sum+=b*c;
	}
	if(sum==d)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}

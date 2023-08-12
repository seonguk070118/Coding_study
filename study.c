#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>


int main()
{
	int a,i,b,c;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d %d",&b,&c);
		printf("%d\n",b+c);
	}
	return 0;
}

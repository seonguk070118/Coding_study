#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int a,b,t[100]={0},i,j=0,k=0;

void change()
{
	int n;
	for(j=0;j<a;j++)
	{
		for(i=0;i<a-1-j;i++)
		{
			if(t[i]>=t[i+1])
			{
				n=t[i];
				t[i]=t[i+1];
				t[i+1]=n;
			}
		}
	}
}

int main()
{
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
	{
		scanf("%d",&t[i]);
	}
	change();
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(t[k]!=0)
			{
				printf("%d ",t[k]);
				k++;
			}
		}
		printf("\n");
	}
	return 0;
}

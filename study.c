#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int list[]={6,5,4,3,2,1};
	int key,i,j,size,temp;
	
	size=sizeof(list)/sizeof(int);
	
	for(i=size-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(list[j]>list[j+1])
			{
				temp=list[j+1];
				list[j+1]=list[j];
				list[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
		printf("%d ",list[i]);
	return 0;
}

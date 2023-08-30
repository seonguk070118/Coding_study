#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int list[]={5,3,8,1,2,7};
	int key,i,j,size,temp;
	
	size=sizeof(list)/sizeof(int);
	
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
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
		printf("%d",list[i]);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int list[]={5,3,8,1,2,7};
	int key,i,j,size,temp
	
	size=sizeof(list)/sizeof(int);
	
	for(i=1,i<size;i++)
	{
		key=list[i];
		for(j=i-1;j>=0&&list[j]>key;j--)
		{
			list[j+1]=list[j];
		}
		list[j+1]=key;
	}
	return 0;
}

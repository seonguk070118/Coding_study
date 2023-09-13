#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

#define MAX_SIZE 10
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

int list[]={5,3,8,4,9,1,6,2,7,10,48,26};
int n=sizeof(list)/sizeof(int);

int partition(int list[],int left,int right)
{
	int pivot,low,high,temp;
	low=left;
	high=right+1;
	pivot=list[left];
	do{
		do{
			low++;
		}while(list[low]<pivot);
		do{
			high--;
		}while(list[high]>pivot);
		if(low<high) SWAP(list[low],list[high],temp);
	}while(low<high);
	SWAP(list[left],list[high],temp);
	return high;
}

void quicksort(int list[],int left,int right)
{
	if(left<right)
	{
		int q=partition(list,left,right);
		quicksort(list,left,q-1);
		quicksort(list,q+1,right);
	}
}

int main()
{
	int i;
	quicksort(list,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",list[i]);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int sorted[1000];

void merge(int list[],int left,int mid, int right)
{
	int i,j,k,l;
	i=left;
	j=mid+1;
	i=left;
	
	while(i<=mid&&j<=right){
		if(list[i]<=list[j])
			sorted[k++]=list[i++];
		else
			sorted[k++]=list[j++];
	}
	if(i>mid)
	{
		for(l=j;l<=right;l++)
			sorted[k++]=list[l];
	}
	else
	{
		for(l=i;l<=mid;l++)
			sorted[k++]=list[l];
	}
	for(l=left;l<=right;l++)
		list[l]=sorted[l];
}

void merge_sort(int list[],int left,int right)
{
	int mid;
	if(left<right)
	{
		mid=(left+right)/2;
		merge_sort(list,left,mid);
		merge_sort(list,mid+1,right);
		merge(list,left,mid,right);
	}
}

int main()
{
	int list[]={27,10,12,20,25,13,15,22};
	int n=sizeof(list)/sizeof(int),i;
	merge_sort(list,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",list[i]);
	}
	return 0;
}

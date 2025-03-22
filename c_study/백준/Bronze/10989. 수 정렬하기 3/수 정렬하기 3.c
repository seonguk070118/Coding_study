#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int i,n,a[10001]={0,},b,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b);
		a[b-1]++;
	}
	for(i=0;i<10000;i++){
		for(j=0;j<a[i];j++){
			printf("%d\n",i+1);
		}
	}
	return 0;
}
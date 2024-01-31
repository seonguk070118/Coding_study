#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc(const void *a, const void *b)
{
	return (*(int *)b - *(int *)a);
}


int main() {
    int n,k,i,a[1002],max=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	qsort((int*)a,n,sizeof(int),cmpfunc);
	printf("%d",a[k-1]);
	return 0;
}

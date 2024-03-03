#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int compare(const int* a, const int* b) { 
	return(*a - *b);
}

int main()
{
	int i,a[5],sum=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	qsort(a,5,sizeof(int),compare);
	printf("%d\n%d",sum/5,a[2]);
	return 0;
}
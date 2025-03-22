#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
typedef struct{
	int age;
	char name[101];
} m;

int compare(m* a,m* b){
	return (a->age > b->age ? 1 : (a->age < b->age ? -1 : 0));
}

int main()
{
	int n,i;
	scanf("%d",&n);
	m* a=(m*)malloc(n*sizeof(m));
	for(i=0;i<n;i++){
		scanf("%d %s",&a[i].age,a[i].name);
	}
	qsort(a,n,sizeof(m),compare);
	for(i=0;i<n;i++){
		printf("%d %s\n",a[i].age,a[i].name);
	}
	return 0;
}
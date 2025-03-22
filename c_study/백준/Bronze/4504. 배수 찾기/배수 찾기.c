#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(i){
		scanf("%d",&i);
		if(i==0) break;
		if(i%n==0){
			printf("%d is a multiple of %d.\n",i,n);
		}
		else{
			printf("%d is NOT a multiple of %d.\n",i,n);
		}
	}
	return 0;
}
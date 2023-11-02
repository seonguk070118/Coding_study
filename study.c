#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<limits.h>
#include <stdbool.h>

int main(){
	int a[101],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			printf("%d ",a[i]);
		}
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			printf("%d ",a[i]);
		}
	}
	return 0;
}

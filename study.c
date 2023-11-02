#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<limits.h>
#include <stdbool.h>

int main(){
	int a[101],n,max=0,count=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[n-1];
	for(i=n-2;i>=0;i--){
		if(a[i]>max){
			count++;
			max=a[i];
		}
	}
	printf("%d",count);
	return 0;
}

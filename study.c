#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<limits.h>
#include <stdbool.h>
int digit_sum(int x){
	if(x==0) return 0;
	return x%10+digit_sum(x/10);
}

int main(){
	int n,i,max=0,temp,data,sum,max_sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&data);
		sum=digit_sum(data);
		max_sum=digit_sum(max);
		if(sum>max_sum) max=data;
		else if(sum==max_sum) max=data>max ? data:max;
	}
	printf("%d",max);
	return 0;
}

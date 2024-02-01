#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int i,a,sum=0,t;
    scanf("%d",&a);
    for(i=1;i<a;i++){
    	sum+=i;
    	t=i;
		while(t>0){
			sum+=t%10;
			t/=10;
		}
		if(sum==a) break;
		sum=0;
	}
	if(i==a){
		printf("0");
		return 0;
	}
	printf("%d",i);
	return 0;
}

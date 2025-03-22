#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	//1.6.12.18.24
	int n,i,c=1,a=6;
	scanf("%d",&n);
	n-=1;
	while(n){
		if(n>=a){
			n-=a;
			a+=6;
			c++;
		}
		else{
			n=0;
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
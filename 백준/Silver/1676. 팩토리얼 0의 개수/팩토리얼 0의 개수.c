#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%5==0){
			c++;
		}
		if(i%25==0){
			c++;
		}
		if(i%125==0){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
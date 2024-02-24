#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int n,s=0,i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(j>=i){
				s+=i;
				s+=j;
			}
		}
	}
	printf("%d",s);
	return 0;
}
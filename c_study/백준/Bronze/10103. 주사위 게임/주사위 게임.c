#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int i,n,a,b,asum=100,bsum=100;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a>b){
			bsum-=a;
		}
		else if(a<b){
			asum-=b;
		}
		else{
			continue;
		}
	}
	printf("%d\n%d",asum,bsum);
	return 0;
}
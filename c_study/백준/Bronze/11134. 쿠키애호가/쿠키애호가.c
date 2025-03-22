#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int i,n,a,b,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		while(1){
			if(a>0){
				a-=b;
				c++;
			}
			else{
				break;
			}
		}
		printf("%d\n",c);
		c=0;
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int t,i,n,count=0;
    scanf("%d",&n);
    for(i=666;count!=n;i++){
    	t=i;
    	while(t!=0){
    		if(t%1000==666){
    			count++;
    			break;
			}
			else{
				t/=10;
			}
		}
	}
	printf("%d",i-1);
	return 0;
}

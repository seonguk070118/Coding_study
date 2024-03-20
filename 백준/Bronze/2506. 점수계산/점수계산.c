#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>



int main() {
	int i,score=0,cnt=1,n,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a==1){
			score+=cnt;
			cnt++;
		}
		else{
			cnt=1;
		}
	}
	printf("%d",score);
	return 0;
}
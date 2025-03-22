#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>



int main() {
	char n[7],a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int i,len,j,sum=0,m=1;
	scanf("%s",n);
	len=strlen(n);
	for(i=0;i<len-1;i++){
		m*=16;
	}
	for(i=0;i<len;i++){
		for(j=0;j<16;j++){
			if(n[i]==a[j]){
				sum+=j*m;
				break;
			}
		}
		m/=16;
	}
	printf("%d",sum);
	return 0;
}
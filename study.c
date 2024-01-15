#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char a[27]={'A','B','C','D','E'
	,'F','G','H','I','J','K','L','M'
	,'N','O','P','Q','R','S','T','U'
	,'V','W','X','Y','Z','\0'};
    int b[27]={3,3,3,4,4,4,5,5,5
	,6,6,6,7,7,7,8,8,8,8,9,9,9,10
	,10,10,10,'\0'};
    int i,sum=0,j;
	char n[16];
    scanf("%s",&n);
    for(i=0;i<strlen(n);i++){
    	for(j=0;j<26;j++){
    		if(n[i]==a[j]){
    			sum+=b[j];
			}
		}
	}
	printf("%d",sum);
    return 0;
}


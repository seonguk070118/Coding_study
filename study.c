#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char a[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int b[27]={0};
    int i,j,max=0,s=0,maxi;
	char n[1000001];
    scanf("%s",&n);
    for(i=0;i<strlen(n);i++){
    	if(n[i]>96){
			b[n[i]-97]++;
		}
		else{
    		b[n[i]-65]++;
		}
	}
	for(i=0;i<26;i++){
		if(max<b[i]){
			max=b[i];
			maxi=i;
		}
	}
	for(j=0;j<26;j++){
		if(max==b[j]){
			if(s==0){
				s++;
			}
			else{
				printf("?");
				return 0;
			}
		}
	}
	printf("%c",a[maxi]);
    return 0;
}


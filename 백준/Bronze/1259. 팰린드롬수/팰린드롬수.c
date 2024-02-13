#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main() {
	char a[6],j,b[6],i;
	while(1){
		scanf("%s",a);
		if(a[0]=='0'){
			return 0;
		}
		j=strlen(a)-1;
		for(i=0;i<strlen(a);i++){
			b[j]=a[i];
			j--;
		}
		j=1;
		for(i=0;i<strlen(a);i++){
			if(a[i]==b[i]){
				continue;
			}
			else{
				printf("no\n");
				j--;
				break;
			}
		}
		if(j==1){
			printf("yes\n");
		}
	}
	return 0;
}
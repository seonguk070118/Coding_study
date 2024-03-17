#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>



int main() {
	int len,i,sum=10;
	char a[51];
	scanf("%s",a);
	len = strlen(a);
	for(i=1;i<len;i++){
		if(a[i]==a[i-1]){
			sum+=5;
		}
		else{
			sum+=10;
		}
	}
	printf("%d",sum);
	return 0;
}
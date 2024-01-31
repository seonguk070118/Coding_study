#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int i,j,c=0;
	char a[10][10];
    for(i=1;i<9;i++){
    	for(j=1;j<9;j++){
    		scanf(" %c",&a[i][j]);
		}
	}
	for(i=1;i<9;i++){
    	for(j=1;j<9;j++){
    		if(i%2==0&&j%2==0&&a[i][j]=='F'){
    			c++;
			}
			else if(i%2==1&&j%2==1&&a[i][j]=='F'){
    			c++;
			}
		}
	}
	printf("%d",c);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
char a[16][16];

int main() {
    
    int i,j;
	for(i=0;i<5;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<15;i++){
		for(j=0;j<5;j++){
			if (a[j][i] != NULL) {
                printf("%c",a[j][i]);
            }
		}
	}
	return 0;
}

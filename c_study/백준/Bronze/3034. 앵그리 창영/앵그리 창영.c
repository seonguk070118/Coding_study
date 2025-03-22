#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>



int main() {
	int a,i,n,w,h,l;
	scanf("%d %d %d",&n,&w,&h);
	l=sqrt(w*w+h*h);
	for(i=0; i<n; i++) {
		scanf("%d",&a);
		if(a>l) {
			printf("NE\n");
		} else {
			printf("DA\n");
		}
	}
	return 0;
}
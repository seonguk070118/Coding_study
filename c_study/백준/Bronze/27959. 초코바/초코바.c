#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if(m<=n*100){
    	printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}

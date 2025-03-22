#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int f(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return f(n-2)+f(n-1);
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
	return 0;
}

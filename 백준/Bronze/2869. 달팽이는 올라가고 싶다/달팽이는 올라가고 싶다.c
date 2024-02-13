#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int a,b,c,d=0;
	scanf("%d %d %d",&a,&b,&c);
	if((c-a)%(a-b)==0){
		d=(c-a)/(a-b)+1;
	}
	else{
		d=(c-a)/(a-b)+2;
	}
	printf("%d",d);
	return 0;
}
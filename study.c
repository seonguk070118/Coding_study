#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	float a,b,c,d,A,B;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	A=a/b;
	B=c/d;
	if(A>B) printf(">");
	else if(A<B) printf("<");
	else printf("=");
}


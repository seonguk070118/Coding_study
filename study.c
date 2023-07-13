#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b) printf(">");
	else if(a<b) printf("<");
	else printf("==");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int n;
int zero()
{
	if(n==0)
		return 1;
	else
	    return 0;
}

int main()
{
	scanf("%d", &n);
	if(zero(n)) printf("zero");
  	else printf("non zero");
	return 0;
}

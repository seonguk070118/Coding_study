#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

void f(int n)
{
	if(n>1) f(n/2);
	printf("%d",n%2);
}

int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}

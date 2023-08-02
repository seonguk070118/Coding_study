#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

long long int n;
int abs()
{
	if(n<0)
	{
		n=~n+1;
	}
	return n;
}

int main()
{
	scanf("%lld", &n);
	printf("%lld\n", abs(n));
	return 0;
}

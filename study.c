#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int n;

long long int f()
{
	long long int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}

int main()
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
}

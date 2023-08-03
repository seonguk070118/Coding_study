#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int n;

long long int f()
{
	long long int i,sum=0;
	while(n)
	{
		sum+=n%10;
		sum*=10;
		n/=10;
	}
	sum/=10;
	return sum;
}

int main()
{
	scanf("%d", &n);
	printf("%d\n", f(n));
}

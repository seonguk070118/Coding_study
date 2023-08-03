#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n, m;

long long int f(int p,int q)
{
	long long int sum;
	sum=(long long int)p+(long long int)q;
	return sum;
}

int main()
{
	scanf("%d%d", &n, &m);
	printf("%lld\n", f(n, m));
}

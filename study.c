#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
long long int n, m;

long long int f(long long int p,long long int q)
{
	long long int sum;
	if(p<q)
		sum=(long long int)q-(long long int)p;
	else
		sum=(long long int)p-(long long int)q;
	return sum;
}

int main()
{
	scanf("%lld%lld", &n, &m);
	printf("%lld\n", f(n, m));
}

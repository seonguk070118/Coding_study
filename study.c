#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

double x;

long long f(double x)
{
	long long int t=(long long int)x;
	if(x==0)
		return 0;
	else if(t<x)
		return x;
	else 
		return x-1;
}
int main()
{
	scanf("%lf", &x);
	printf("%lld\n", f(x));
}

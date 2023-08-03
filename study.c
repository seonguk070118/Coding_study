#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

double x;

long long f(double x)
{
	long long int t=(long long int)x;
	if(t<x)
		return x+1;
	else 
		return x;
}
int main()
{
	scanf("%lf", &x);
	printf("%lld\n", f(x));
}

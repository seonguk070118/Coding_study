#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

long long int n;
int sqrt()
{
	long long int i;
	for(i=0;i*i<n;i++);
	
	if(i*i==n)
		return i;
	else
		return i-1;
	
}

int main()
{
	scanf("%lld", &n);
	printf("%d\n", sqrt(n));
	return 0;
}

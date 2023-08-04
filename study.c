#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int a, n;

long long int pow()
{
	long long int i,sum;
	sum=1;
	for(i=0;i<n;i++)
	{
		sum*=a;
	}
	return sum;
}

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}

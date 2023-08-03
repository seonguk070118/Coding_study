#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int n;

int f()
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum++;
		}
	}
	return sum;
}

int main()
{
	scanf("%d", &n);
	printf("%d\n", f(n));
}

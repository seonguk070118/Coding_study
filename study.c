#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int n;
int prime()
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	scanf("%d", &n);
	if(prime(n)) printf("prime");
	else printf("composite");
	return 0;
}

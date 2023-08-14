#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n,a,b,d[1010];

int subsetsum(){
	long long int i,sum=0;
	for(i=a;i<=b;i++)
	{
		sum+=d[i];
	}
	return sum;
}

int main()
{
	int i;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		scanf("%d", &d[i]);
	scanf("%d%d", &a, &b);
	printf("%lld\n", subsetsum(a, b));
}

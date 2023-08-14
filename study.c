#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n,a,b,d[1010];

int maxi(){
	int i,max=-2147483648;
	for(i=a;i<=b;i++)
	{
		if(d[i]>max)
		{
			max=i;
			printf("%d\n",max);
		}
	}
	return max;
}

int main()
{
	int i;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		scanf("%d", &d[i]);
	scanf("%d%d", &a, &b);
	printf("%d\n", maxi(a, b));
}

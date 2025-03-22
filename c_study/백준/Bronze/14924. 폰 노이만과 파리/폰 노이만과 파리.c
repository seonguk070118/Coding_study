#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	printf("%d",((k/2)/n)*m);
	return 0;
}
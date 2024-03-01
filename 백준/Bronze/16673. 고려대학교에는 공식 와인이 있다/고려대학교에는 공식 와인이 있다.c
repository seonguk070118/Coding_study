#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int n,k,p,i,s=0;
	scanf("%d %d %d",&n,&k,&p);
	for(i=0;i<=n;i++){
		s+=(k*i)+(p*(i*i));
	}
	printf("%d",s);
	return 0;
}
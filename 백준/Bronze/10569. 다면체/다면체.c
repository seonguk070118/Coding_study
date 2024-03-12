#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int i,n,a,b,c=2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",c-(a-b));
	}
	return 0;
}
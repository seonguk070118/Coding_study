#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	long long a,sum=0,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
        sum+=4;
	}
	printf("%lld",sum);
	return 0;
}
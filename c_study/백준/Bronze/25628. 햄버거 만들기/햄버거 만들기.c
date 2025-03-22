#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);
	while(a>=2&&b>0){
		a-=2;
		b-=1;
		c++;
	}
	printf("%d",c);
	return 0;
}
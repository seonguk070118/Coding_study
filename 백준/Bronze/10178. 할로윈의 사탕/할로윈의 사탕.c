#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int i,n,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n",a/b,a%b);
	}
	return 0;
}
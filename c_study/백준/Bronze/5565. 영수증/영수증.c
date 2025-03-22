#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int s,a,i;
	scanf("%d",&s);
	for(i=0;i<9;i++){
		scanf("%d",&a);
		s-=a;
	}
	printf("%d",s);
	return 0;
}
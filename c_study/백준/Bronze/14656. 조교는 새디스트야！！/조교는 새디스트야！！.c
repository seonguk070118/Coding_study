#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int n,c=0,i,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&s);
		if(s!=i){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
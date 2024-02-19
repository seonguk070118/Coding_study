#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int i,n,a[52],b[52],c=1,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==a[j]&&b[i]==b[j]){
				continue;
			}
			if(a[i]<a[j]&&b[i]<b[j]){
				c++;
			}
		}
		printf("%d ",c);
		c=1;
	}
	return 0;
}
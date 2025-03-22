#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	int s1=1,s2=1,n,k,i,nk,s3=1;
	scanf("%d %d",&n,&k);
	nk=n-k;
	for(i=1;i<=n;i++){
		s1*=i;
	}
	for(i=1;i<=k;i++){
		s2*=i;
	}
	for(i=1;i<=nk;i++){
		s3*=i;
	}
	printf("%d",s1/(s2*s3));
	return 0;
}
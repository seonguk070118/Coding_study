#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	long long int i,n,a,b,s=0,j,m[15][15],k;
	scanf("%d",&n);
	for(i=0;i<15;i++){
		for(j=1;j<15;j++){
			if(i==0){
				m[0][j]=j;
				continue;
			}
			for(k=1;k<=j;k++){
				s+=m[i-1][k];
			}
			m[i][j]=s;
			s=0;
		}
	}
	for(i=0;i<n;i++){
		scanf("%d\n%d",&a,&b);
		printf("%d\n",m[a][b]);
	}
}
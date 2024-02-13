#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	int i,j,k,n,m,a[102]={0},mx=300001,mh;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				continue;
			}
			for(k=0;k<n;k++){
				if(k==j||k==i){
					continue;
				}
				if(m-(a[i]+a[j]+a[k])<mx && m-(a[i]+a[j]+a[k])>=0){
					mh=a[i]+a[j]+a[k];
					mx=m-(a[i]+a[j]+a[k]);
				}
			}
		}
	}
	printf("%d",mh);
	return 0;
}

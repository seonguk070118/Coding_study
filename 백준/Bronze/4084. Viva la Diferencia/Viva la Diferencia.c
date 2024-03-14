#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int f(int a,int b,int c,int d){
	int t,co=0;
	while(a!=b||b!=c||c!=d){
		t=a;
		a=a-b;
		a=abs(a);
		b=b-c;
		b=abs(b);
		c=c-d;
		c=abs(c);
		d=d-t;
		d=abs(d);
		co++;
	}
	return co;
}

int main()
{
	int a,b,c,d;
	while(1){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a==0&&b==0&&c==0&&d==0){
			break;
		}
		printf("%d\n",f(a,b,c,d));
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	double a=0,b,a1=0,c,i,a2=0;
	scanf("%lf %lf",&a,&b);
	a1=a;
	a2=a;
	for(i=0;i<b;i++)
	{
		scanf("%lf",&c);
		if(c<0){
			c*=-1;
			a2=a1/100*c;
			a1-=a2;
		}
		else{
			a2=a1/100*c;
			a1+=a2;
		}
	}
	printf("%.0f",a1-a);
	if(a1-a>0) printf("good");
	else if(a1-a<0) printf("bad");
	else printf("same");
	return 0;
}

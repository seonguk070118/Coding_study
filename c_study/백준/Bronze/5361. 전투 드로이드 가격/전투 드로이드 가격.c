#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	double a=350.34,b=230.90,c=190.55,d=125.30,e=180.90,s=0.00;
	int i,n,a1,b1,c1,d1,e1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1);
		s+=a*a1;
		s+=b*b1;
		s+=c*c1;
		s+=d*d1;
		s+=e*e1;
		printf("$%.2f\n",s);
		s=0.00;
	}
	return 0;
}
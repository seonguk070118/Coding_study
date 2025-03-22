#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	c=a*b;
	printf("%.1f",c/2.0);
	return 0;
}
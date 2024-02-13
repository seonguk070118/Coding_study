#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int a, b;

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcm(long long int a,long long int b)
{
	long long int sum;
    long long int r,x,y;
    x=a;
    y=b;
  	while (y != 0) {
    	r = x % y;
    	x = y;
    	y = r;
  	}
  	sum=(a*b)/x;
  	return sum;
}

int main()
{
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a, b));
  printf("%lld", lcm(a, b));
}
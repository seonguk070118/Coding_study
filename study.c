#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

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
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}

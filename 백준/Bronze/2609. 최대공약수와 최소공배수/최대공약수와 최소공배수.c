#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int a, b;

int gc(){
    
    int i,n=1;
    
    for(i=1;i<a;i++){
        if(a%i==0 && b%i==0){
            n=i;
        }
    }
    return n;
}

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
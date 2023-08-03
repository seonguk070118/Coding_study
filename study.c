#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}

int mid(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		if(b>c)
			return b;
		else
			return c;
	}
	else if(b>a&&b>c)
	{
		if(a>c)
			return a;
		else
			return c;
	}
	else if(c>a&&c>b)
	{
		if(b>a)
			return b;
		else
			return a;
	}
}

int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n, m;

int max(int p,int q)
{
	if(p>q)
		return p;
	else
		return q;
}

int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", max(n, m));
}

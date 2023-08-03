#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n, m;

int min(int p,int q)
{
	if(p>q)
		return q;
	else
		return p;
}

int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}

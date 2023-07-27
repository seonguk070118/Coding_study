#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n;

void f()
{
	if(n==0)
		printf("false");
	else
		printf("true");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>


int main()
{
  int a,i,j;
  scanf("%d",&a);
  for(i=1;i<=9;i++)
  {
  	for(j=0;j<a*i;j++)
  	{
  		printf("*");
	}
	printf("\n");
  }
  return 0;
}

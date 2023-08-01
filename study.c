#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>


int main()
{
  int a,i,max=0,men=1000001;
  for(i=0;i<4;i++)
  {
	scanf("%d\n",&a);
	if(a>max)
		max=a;
	if(a<men)
		men=a;
  }
  printf("%d\n%d",max,men);
  return 0;
}

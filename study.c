#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>


int main()
{
  int sum=0,i,a;
  char b;
  scanf("%d",&a);
  sum=a;
  for(i=0;;i++)
  {
	scanf("%c%d",&b,&a);
  	if(b=='+')
  	{
  		sum+=a;
	}
	else if(b=='-')
	{
		sum-=a;
	}
	else if(b=='*')
	{
		sum*=a;
	}
	else if(b=='/')
	{
		sum/=a;
	}
	else if(b=='=')
	{
		break;
	}
  }
  printf("%d",sum);
  return 0;
}

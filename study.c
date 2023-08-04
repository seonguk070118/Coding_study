#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int i,sum1=0,sum2=0;
	char a[102];
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='c'||a[i]=='C')
		{
			sum1++;
			if(a[i+1]=='c'||a[i+1]=='C')
			{
				sum2++;
			}
		}
	}
	printf("%d\n%d",sum1,sum2);
	return 0;
}

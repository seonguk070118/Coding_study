#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int i=0;
	char a[1001]={0};
	gets(a);
	while(a[i])
	{
		if(a[i]<58)
		{
			printf("%c",a[i]);
		}
		else if(a[i]>95)
		{
			printf("%c",a[i]-32);
		}
		else if(a[i]<95)
		{
			printf("%c",a[i]+32);
		}
		i++;
	}
	return 0;

}

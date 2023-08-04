#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int i;
	char a[100],b[100],c[100];
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i]+2;
		printf("%c",b[i]);
	}
	printf("\n");
	for(i=0;a[i]!=0;i++)
	{
		c[i]=(a[i]*7)%80+48;
		printf("%c",c[i]);
	}
	return 0;
}

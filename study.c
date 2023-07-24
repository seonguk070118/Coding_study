#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	char a[101];
	int i;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=' '){
			printf("%c",a[i]);
		}
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
	int i;
	char a[100]={0};
	gets(a);
	for(i=0;i<sizeof(a);i++)
	{
		if(a[i]==0)
			break;
		if(isspace(a[i]))
			printf(" ");
		else if(a[i]=='x')
			printf("a");
		else if(a[i]=='y')
			printf("b");
		else if(a[i]=='z')
			printf("c");
		else
			printf("%c",a[i]+3);
	}
	return 0;
}

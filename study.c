#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
	int i;
	char a[201]={0};
	gets(a);
	for(i=0;i<sizeof(a);i++)
	{
		if(a[i]==0)
			break;
		if(isspace(a[i]))
			printf(" ");
		else if(a[i]=='a')
			printf("x");
		else if(a[i]=='b')
			printf("y");
		else if(a[i]=='c')
			printf("z");
		else
			printf("%c",a[i]-3);
	}
	return 0;
}

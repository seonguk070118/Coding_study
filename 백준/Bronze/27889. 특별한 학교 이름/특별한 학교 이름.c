#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	char a[5];
	scanf("%s",a);
	if(a[0]=='N'){
		printf("North London Collegiate School");
	}
	else if(a[0]=='B'){
		printf("Branksome Hall Asia");
	}
	else if(a[0]=='K'){
		printf("Korea International School");
	}
	else if(a[0]=='S'){
		printf("St. Johnsbury Academy");
	}
	return 0;
}
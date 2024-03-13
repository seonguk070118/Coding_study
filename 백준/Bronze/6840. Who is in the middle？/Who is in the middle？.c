#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int i,a[3],t,j;
	scanf("%d\n%d\n%d",&a[0],&a[1],&a[2]);
	if((a[0]>=a[2]&&a[0]<=a[1])||(a[0]>=a[1]&&a[0]<=a[2])){
		printf("%d",a[0]);
	}
	else if((a[1]>=a[0]&&a[1]<=a[2])||(a[1]>=a[2]&&a[1]<=a[0])){
		printf("%d",a[1]);
	}
	else if((a[2]>=a[0]&&a[2]<=a[1])||(a[2]>=a[1]&&a[2]<=a[0])){
		printf("%d",a[2]);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int n;
char grade()
{
	if(n>=90)
		return 'A';
	else if(n>=80)
		return 'B';
	else if(n>=70)
		return 'C';
	else if(n>=60)
		return 'D';
	else
		return 'F';
}

int main()
{
	scanf("%d", &n);
	printf("%c", grade(n));
	return 0;
}

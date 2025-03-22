#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
	char a;
	scanf("%c",&a);
	switch(a){
		case 'M':
			printf("MatKor");
			break;
		case 'W':
			printf("WiCys");
			break;
		case 'C':
			printf("CyKor");
			break;
		case 'A':
			printf("AlKor");
			break;
		case '$':
			printf("$clear");
			break;
	}
	return 0;
}
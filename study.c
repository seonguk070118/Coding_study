#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0){
    	printf("¦��+");
	}
	else{
		printf("Ȧ��+");
	}
	if(b%2==0){
    	printf("¦��=");
	}
	else{
		printf("Ȧ��=");
	}
	if(a%2==0 && b%2==0){
		printf("¦��");
	}
	else if(a%2==1 && b%2==1){
		printf("¦��");
	}
	else if(a%2==0 && b%2==1){
		printf("Ȧ��");
	}
	else if(a%2==1 && b%2==0){
		printf("Ȧ��");
	}
    return 0;
}


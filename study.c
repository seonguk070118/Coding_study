#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a[8];
	int b[7],i,sum=0,bo=0;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<6;i++){
		if(a[6]==b[i]){
			bo++;
		}
		if(a[0]==b[i]){
			sum++;
		}
		if(a[1]==b[i]){
			sum++;
		}
		if(a[2]==b[i]){
			sum++;
		}
		if(a[3]==b[i]){
			sum++;
		}
		if(a[4]==b[i]){
			sum++;
		}
		if(a[5]==b[i]){
			sum++;
		}
	}
	if(sum==6) printf("1");
	else if(sum==5 && bo==1) printf("2");
	else if(sum==5) printf("3");
	else if(sum==4) printf("4");
	else if(sum==3) printf("5");
	else if(sum<=2) printf("0");
	return 0;
}


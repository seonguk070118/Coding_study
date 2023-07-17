#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int t,s1,s2;
	scanf("%d %d %d",&t,&s1,&s2);
	s1+=1;
	while(1){
		t+=5;
		if(t>=90)
		{
			if(s1>s2) printf("win");
			else if(s1=s2) printf("same");
			else printf("lose");
			return 0;
		}
	 	s1+=1;
	 	printf("%d ",t);
	 	printf("%d\n",s1);
	}
}


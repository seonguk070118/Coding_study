#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <stdbool.h>


int main()
{
    int n,i,a[101],max=0,min=1000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    	if(a[i]>max)
    		max=a[i];
    	if(a[i]<min)
    		min=a[i];
	}
	printf("%d",max-min);
    return 0;
}

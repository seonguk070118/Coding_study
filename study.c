#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n, k, d[1010];

int findi(){
	int i;
	for(i=1;i<=n;i++)
	{
		if(d[i]==k)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int i;
  scanf("%d", &n);

  for(i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", findi(k));
}

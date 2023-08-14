#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int n, k, d[1010];

int upper_bound()
{
	
	int i;
	for(i=1;i<=n;i++)
	{
		if(k<d[i])
		{
			return i;
		}
	}
	return n+1;
}

int main()
{
	int i;
  scanf("%d", &n);

  for(i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", upper_bound(k));
}

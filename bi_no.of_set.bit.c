#include<stdio.h>

int main()
{
	int n,set=0;
	scanf("%d",&n);
	while(n)
	{
		if(n&1)
		{
			set++;
		}
		n = n>>1;
	}
	printf("%d",set);
}

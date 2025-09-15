#include<stdio.h>
int main()
{
	int sum=0,n,i;
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	if (sum==n)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
	}
}

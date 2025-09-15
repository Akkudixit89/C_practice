#include<stdio.h>
#include<math.h>
int Prime(int n)
{
	int i,count=0;
	for(i=2;i<=sqrt(n);i++)
	{
		
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==0)   //if no divisor, return true(1)
	{
		return 1;
	}
	else
	{
		return 0;    //else return false(0)
	}
}

int main()
{
	int n,i;
	printf("enter number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(Prime(i)==1 && Prime(n-i)==1)
		{
			printf("\n%d = %d + %d",n,i,n-1);
		}
	}
	return 0;
}

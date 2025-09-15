#include<stdio.h>
#include<math.h>
void Prime(int n)
{
	int i,count=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\nit is prime");
	}
	else
	{
		printf("\nit is not prime");
	}

}

int main()
{
	int n ;
	printf("enter the number:");
	scanf("%d",&n);
	Prime(n);//fun call
	return 0;
}

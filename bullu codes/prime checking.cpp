#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,i,count;
	printf("enter number=");
	scanf("%d",&n);
	for(i=2,count=0;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	printf("prime");
	else
	printf("not prime");
}

#include<stdio.h>
int main(){
	int sum=0,i,n;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
    }
	if(sum==n)
	{
		printf("number is perfect");
	}
	else
	{
		printf("number is not perfect");
	}
	
}

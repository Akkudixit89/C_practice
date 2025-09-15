#include<stdio.h>
int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main(){
	int t,i,sum=0,ans;
	printf("enter no. of terms=");
	scanf("%d",&t);
	printf("sum of series =");
	for(i=0;i<=t;i++)
	{
		ans=fib(i);
		sum=sum+ans;
		printf("%d",ans);
	}
	printf("\nsum of series =%d",sum);
}

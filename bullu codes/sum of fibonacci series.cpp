#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c,sum=0;
	printf("enter num=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		sum=sum+a;
		c=a+b;
		a=b;
		b=c;	
	}
	printf("\n sum of series = %d ",sum);
}

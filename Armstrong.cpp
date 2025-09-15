#include<stdio.h>
#include<math.h>
int main()
{
	int len=0,num,n2,temp,sum=0,di;
	printf("enter number:");
	scanf("%d",&num);
	temp=n2=num;
	while(num!=0)
	{
		len=len+1;
		num=num/10;
	}
	while(n2!=0)
	{
		di=n2%10;
		sum=sum+pow(di,len);
		n2=n2/10;
	}
	if(temp==sum)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
	
	
}

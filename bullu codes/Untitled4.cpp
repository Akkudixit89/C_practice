#include<stdio.h>
#include<math.h>
int Prime(int n)
{
	int i, count=0;
	if(n==1)
	return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			count++;
			return 0;
		}
	}
	if(count==0)
	{
		return 1;
	}
}
int Fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int Table(int n)
{
	int i,table;
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("%d x %d =%d \n",n,i,table);
	}
	return 1;
}
int Evenodd(int n)
{
	if(n%2==0)
	return 1;
	else if(n%2!=0)
	return 2;
	else
	return 0;
}
int main()
{
	int n,choice;
	printf("enter number=");
	scanf("%d",&n);
	printf("**1. find factorial**\n");
	printf("**2. multiplication table**\n");
	printf("**3. check even or odd**\n");
	printf("**4. check prime**\n\n");
	printf("enter your choice(1,2,3,4)=   ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("%d",Fact(n));
	}
	else if(choice==2)
	{
		printf("%d",Table(n));
	}
	else if(choice==3)
	{
		if(Evenodd(n)==1)
		    printf("number is even");
		else if(Evenodd(n)==2)
		    printf("number is odd");
		else
		    printf("invalid");
	}
	else if(choice==4)
	{
		if(Prime(n)==1)
		printf("number %d is prime",n);
		else
		printf("number %d is not prime",n);
	}
	else
	printf("invalid choice");
	
}


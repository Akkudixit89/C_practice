//write a program using goto to add only positive number entered by user till user enters 999.

#include<stdio.h>
int main()
{
	int  num , sum=0;
	read:
	printf("\n enter any number until user enter 999=");
	scanf("%d",&num);
	if(num==999)
	    goto out;	
	if(num>0)
	{
		sum=sum+num;
	    goto read;
	}
	else
	{
		goto read;
	}
	out:
		printf("\nsum= %d",sum);
	return 0;
	
}

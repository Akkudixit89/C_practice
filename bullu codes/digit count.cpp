#include<stdio.h>
int main(){
	long int n,sum=0,digit;
	printf("enter number =");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		if(digit%2==0)
		{
		    sum=sum+digit;	
		}
		n=n/10;
	}
	printf("even sum  = %d",sum);
}

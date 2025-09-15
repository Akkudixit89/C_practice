//WRITE A PROGRAM TO INPUT  A NUMBER AND CHECK WHETHER IT IS PALINDROME OR NOT .
#include <stdio.h> 
int main(){
	int number ,digit,rev=0,temp;
	printf("enter number:");
	scanf("%d",&number);
	temp=number;
	while (number!=0)
	{
		digit=number%10;
		rev=(rev*10)+digit;
		number=number/10;
	}
	if(temp==rev)
	{
		printf(" CONGRATS Number entered is palindrome");
	}
	else
	{
		printf("Number entered is not palindrome");
	}
}

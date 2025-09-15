#include <stdio.h>
int main(){
	int num , n , di,count=0;
	printf("enter number = ");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		
		di=num%10;
		if(n%di==0)
		{
			printf("\n %d is divisible by %d",n,di);
			count++;
		}
		else
		{
			printf("\n %d is not divisible by %d",n,di);
		}
		num=num /10;
	}
	printf("\n count is %d",count);
}

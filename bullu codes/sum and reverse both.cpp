#include<stdio.h>
int main(){
	int sum=0,d,n,rev,temp;
	printf("enter the number=");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("reverse =%d\n",rev);
	sum=(temp+rev);
	printf("sum of number and its is reverse =%d",sum);
}

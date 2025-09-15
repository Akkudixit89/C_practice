#include<stdio.h>
int main(){
	int n,rev,d;
	printf("enter num=");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		rev=(rev*10)+d;
		n=n/10;
	}
	printf(" reverse = %d",rev);
}

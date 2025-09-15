//display this gp-100,50,25,... upto n terms
#include<stdio.h>
int main(){
	int a,i,n;
	printf("enter n=");
	scanf("%d",&n);
	a=100;
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		a=a*1/2;
	}
}

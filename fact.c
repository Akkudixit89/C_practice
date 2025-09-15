#include<stdio.h>
int main(){
	int n,i=1,fact=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n factorial = %d",fact);
}

#include<stdio.h>
#include<math.h>
int fact(int n );
int main(){
	int n,r;
	scanf("%d %d",&n,&r);
	int comb=fact(n)/(fact(r)*fact(n-r));
	printf("combination=%d",comb);
}
int fact(int n)
{
	int fact1=1;
	
	for(int i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}
	return fact1;
}

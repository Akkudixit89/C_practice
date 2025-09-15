//display this ap-100,97,94,... upto all terms which are positive
#include<stdio.h>
int main(){
	int i,n;
	printf("enter n=");
	scanf("%d",&n);
	for(i=100;i>=(-3*n+103);i=i-3)
	{
		if(i>=0)
		{
			printf("%d ",i);
		}
		
	}
}

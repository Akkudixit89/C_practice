//display this ap-100,97,94,... upto all terms which are positive
#include<stdio.h>
int main(){
	int a,i,n;
	printf("enter n=");
	scanf("%d",&n);
	a=100;
	for(i=1;i<=n;i++)  //or for(i=1;a>0;i++)
	{
		if(a>=0)
		{
			printf("%d ",a);
			a=a-3;
		}
		
	}
}

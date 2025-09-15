#include<stdio.h>
int fact(int n)
{
	int fact1=1;
	
	for(int i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}
	return fact1;
}
int main(){
	int lines,i,j,k;
	printf("enter no. of lines=");
	scanf("%d",&lines);
	for(i=0;i<lines;i++)
	{
		for(k=0;k<(lines-i-1);k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			
			printf(" %d ",fact(i)/(fact(j)*fact(i-j)));
		}
		printf("\n");
	}
}

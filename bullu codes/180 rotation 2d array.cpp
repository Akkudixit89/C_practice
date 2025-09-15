#include<stdio.h>
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

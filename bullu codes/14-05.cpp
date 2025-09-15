#include<stdio.h>
int main(){
	int a[2][2]={1,2,3,4},i,j;
	for(i=0;i<2;i++)
	{
		for(j=1;j>-1;j--)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}

#include<stdio.h>
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
	for(i=0;i<3;i++)
	{
		for(j=2;j>-1;j--)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}

#include<stdio.h>
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
	for(i=2;i>-1;i--)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}

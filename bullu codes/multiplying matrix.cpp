// dimemsion kam ho to address print kro
#include<stdio.h>
int main(){
	int a[2][2]={1,2,3,4},i,j,k,c[2][2],b[2][2]={5,6,7,8};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}

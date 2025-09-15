#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i=i+1)
	{
		for(j=1;j<=5;j=j+1)
		{
			int a=5/2+1;
            if(i==a||j==a)
            printf("*");
		}
		printf("\n");
	}
}

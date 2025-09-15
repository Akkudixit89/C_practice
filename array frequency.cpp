#include<stdio.h>
int main(){
	int a[]={1,2,1,2,3,4,3,3,5},i,j,size=9,c;
	for(i=0;i<size;i++)
	{
		c=1;
		for(j=0;j<size;j++)
		{
			if(i!=j&&a[i]==a[j])
			{
				c++;
			}
		}
		printf("\n%d = %d",a[i],c);
	}
}

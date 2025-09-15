//find the frequency of each element present in the given array

#include<stdio.h>
int main(){
	int a[]={1,2,1,2,3,4,3,3,5},i,j,size=9,c=1;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		printf("\n%d = %d",a[i],c);
	}
}

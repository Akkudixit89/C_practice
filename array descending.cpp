//sort the given array into descending order 
//int a[]={1,2,3,4,5,6}
#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6},temp,i,j;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]<a[j+1])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
    }
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
}


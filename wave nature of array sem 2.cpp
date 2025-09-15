#include<stdio.h>
int main()
{
	int a[]={10,90,49,2,15,23},i,temp;
	int size=7;
	for(i=0;i<size;i=i+2)
	{
		if(a[i]<a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		if(a[i]<a[i-1]&&i>0)
		{
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}

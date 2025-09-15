#include<stdio.h>
int main()
{
	int a[]={1,7,2,9,5,6,3};
	int max,temp;
	int size=7;
	int i;
	max=a[size-1]=a[6];
	max=3;
	a[size-1]=-1;
	for(i=size-2;i>=0;i--)
	{
		int temp=a[i];
		a[i]=max;
		if(max<temp)
		{
			max=temp;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d",a[i]);
	}	
}

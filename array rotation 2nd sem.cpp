#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6},i;
	int temp=a[6];
	for(i=5;i>0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=temp;
	for(i=0;i<7;i++)
	    printf(" %d  ",a[i]);
}
//uses = in otp we use this code and in industry

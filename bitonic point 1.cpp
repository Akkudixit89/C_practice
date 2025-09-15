//psa 2nd sem
#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,8,7,5},low=0,high=5,mid;
	int flag=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]>a[mid-1]&&a[mid]>a[mid+1])
		{
			flag=1;
			break;
		}
		else if (a[mid]>a[mid-1])
		    low=mid+1;
		else 
		    high=mid-1;
	}
	if(flag==1)
	printf("the bitonic point is at %d",mid);
	else
	printf("the bitonic point is not available");
}

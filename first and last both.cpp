#include<stdio.h>
#include<stdio.h>
int main()
{
	int a[]={1,2,2,2,3,4,5};
	int low=0,high=6;
	int mid;
	int data=2;
	int result=-1;
	int result2;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==data)
		{
			result=mid;
			high=mid-1;
		}
		else if(a[mid]>data)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	printf("first occurence is at %d\n",result);
    while(low<=high)
	{
		mid=(low+high)/2;
		result2=result;
		if(a[mid]==data)
		{
			result=mid;
			low=mid+1;
		}
		else if(a[mid]>data)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	printf("last occurence is at %d",result2);
}


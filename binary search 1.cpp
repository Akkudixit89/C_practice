//psa 2nd sem
#include<stdio.h>
int main()
{
	int a[6],mid,flag=0;
	int data;
	printf("enter key=");
	scanf("%d",&data);
	int low=0;
	int high=5;
	printf("enter array elements=");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	while(low<=high)
	{
		mid=low+high/2;
		if(a[mid]==data)
		{
			flag=1;
			break;
		}
		else if(a[mid]>data)
		{
			high=mid-1;
		}
		else 
		low=mid+1;
    }
	if (flag==1)
	printf("key found at %d",mid);
	else
	printf("key doesn'nt exist ");
		
}

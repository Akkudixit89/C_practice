#include<stdio.h>
float findAVG(int arr[],int n )
{
	int i;
	float sum=0.0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return (sum/n);
}



int main()
{
	int arr[100],n,i;
	float ans;
	printf("enter n:");
	scanf("%d",&n);
	printf("\nenter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	ans=findAVG(arr,n); //passing array to function
	printf("\naverage marks=%f",ans);
	return 0 ;
}

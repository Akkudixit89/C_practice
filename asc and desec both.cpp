#include<stdio.h>
int main(){
	int i,j,temp,b,n,arr[30];
	printf("enter value of n\n");
	scanf("%d",&n);
	b=n/2;
	
	printf("\nenter the numbers=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<b;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=b;i<n;i++)
	{
		for(j=j+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n the 1st half in ascending are\n");
	for(i=0;i<b;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n the 2nd half in descending are\n");
	for(i=b;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

#include<stdio.h>
void bubblesort(int arr[],int n)
{
	int i , j , temp;
	for (i=1;i<n-1;i++) //for passes
	{
		for(j=0;j<=n-i-1;j++)  // to select ele and its adjacent
		{
			if(arr[j+1] < arr[j]) //swapping condition
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int arr[100],n,i;
	printf("enter n:");
	scanf("%d",&n);
	printf("\nenter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bubble
}

#include <stdio.h>
int main()
{
	int n , i , max, index ;
	  printf("enter n:");
	scanf("%d",&n);
	
	int arr[n]; //declaring array
	
	printf("\n enter %d array elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//initialize first value as max
	
	max=arr[0];
	index=0;
	
	for (i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			index=i;
			
		}
	}
	printf("\n max value =%d  index=%d,max,index");
	return 0;
	 
}

// for duplicate occurences







#include<stdio.h>
int main()
{
	int n , i ,index,key,found ;
	printf("enter n:");
	scanf("%d",&n);
	
	int arr[n]; //declaring array
	
	printf("\n enter %d array elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	printf("\n enter %d key ");
	
	//linear search logic.........
	for (i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("\n key found at index=%d",i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("key doesn't exist");
    }
	return 0;
}


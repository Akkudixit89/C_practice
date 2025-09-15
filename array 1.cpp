// write a program to store the marks of n students and then find the average marks 
#include <stdio.h>
int main()
{
	int sum,n,i;
	printf("enter no.of students =");
	scanf("%d",&n);
	
	int arr[n]; //declaring array of size =n
	printf("\n enter the marks of %d students : \n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum=0;
	printf("\n entered marks  = \n");
	for (i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		sum=sum+arr[i];
	}
	
	printf("\naverage marks=%f",(float)sum/n);
	return 0;
}

#include<stdio.h>
int main(){
	int i,j,flag,n;
	for(i=0;i<n-2;i++)
	{
		flag=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d",arr[i]);
		}
	}
	//print last value seperately
	printf("%d",arr[n-1]);
}
int main()
{
	int arr[100],n,i;
	printf("enter n:");
	scanf("%d",&n);
	printf("\n enter %d array elements \n",n);

    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	findleader(arr,n);//call function
	return 0;

}

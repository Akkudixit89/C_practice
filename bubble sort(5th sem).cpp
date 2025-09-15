#include<stdio.h>
int main(){
	int n=6,temp,i,j;
	int arr[n]={5,2,1,7,9,3};
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n-i-1;j++)
		{
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<=n;i++ )
	{
		printf(arr[i]);
	}
}

#include<stdio.h>
int main(){
	int temp,i,j;
	int arr[6]={5,2,1,7,9,3};
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-i-1;j++)
		{
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<6;i++ )
	{
		printf("%d\t",arr[i]);
	}
}

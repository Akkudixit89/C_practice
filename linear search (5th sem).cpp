#include<stdio.h>
int main(){
	int arr[6]={5,3,23,6,8,4};
	int i,target=5,flag=0;
	for(i=0;i<=6;i++)
	{
		if(arr[i]==target)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("element found");
	}
	else
	{
		printf("element not found");
	}
	
}

#include<stdio.h>
int main(){
	int j,i,key;
	int arr[6]={50,21,10,71,93,32};
	for(j=1;j<6;j++)
	{
		key=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key)
		{
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
	for(i=0;i<6;i++ )
	{
		printf("%d\t",arr[i]);
	}
}

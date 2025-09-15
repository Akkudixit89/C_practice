//minimum distance between two elements in a given array //18-4-2024
#include<stdio.h>
int main(){
	int a[]={1,2,2,6,4,4};
	int size=7,i;
	int index1,index2;
	for(i=0;i<size;i++)
	{
		if(a[i]==2)
		{
			index1=i;
		}
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==4)
		{
			index2=i;
			break;
		}
	}
	int distance=index2-index1;
	printf("distance is %d",distance);
}

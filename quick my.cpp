#include<stdio.h>
int swap(int*a , int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int low)

#include<stdio.h>
int swap(int* a , int* b);
int main()
{
	int a=10,b=5;
	swap(&a,&b);
	printf("swapping =%d %d",a,b);
}
int swap(int* a , int* b)
{
	int temp=*a;
	*a=*b;
	*b =temp;
}

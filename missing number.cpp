//find the missing number 
#include<stdio.h>
int main(){
	int missing_no,sum,j,i,sumarray=0;
	int a[]={1,2,3,4,6,7,8};
	int size=7;
	sum=0;
	for(i=1;i<=8;i++)
	{
		sum=sum+i;
	}
	for(j=0;j<size;j++)
	{
		sumarray=sumarray+a[j];
	}
	missing_no=sum-sumarray;
	printf("%d",missing_no);
}

//time complexity = o(n)
// agar loop ke 

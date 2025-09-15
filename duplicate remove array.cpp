#include<stdio.h>
int main(){
	int a[]={1,1,2,2,2,3,4,5,5,6,7,8},i,j,n;
	int size=sizeof(a)/sizeof(a[0]);
	int k;
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(a[i]==a[j+1])
			{
				for(k=i;k<size;k++)
				{
					a[k]=a[k+1];
				}
				n=n-1;
			}
			else
			{
				break;
			}
		}
    }
    for
}

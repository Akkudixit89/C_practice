#include<stdio.h>
int main(){
	int a[]={2,4,1,6,3,8,5};
	int i, j,size=7; //sizeof(a)\sizeof(a[o]);
	for(j=0;j<size;j++)
	{
		for(i=j+1;i<size;i++)
		{
			if(a[j]<a[i])
			{
				printf("%d--->  %d \n",a[j],a[i]);
				break;
			}
		}
	}
}

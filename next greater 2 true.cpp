#include<stdio.h>
int main(){
	int a[]={2,4,1,6,3,8,5};
	int i, j,size=7; //sizeof(a)\sizeof(a[o]);
	int flag;
	for(j=0;j<size;j++)
	{
		flag=0;
		for(i=j+1;i<size;i++)
		{
			if(a[j]<a[i])
			{
				flag=1;
				printf("%d--->  %d \n",a[j],a[i]);
				break;
			}
		}
		if(flag==0)
		printf("%d ---> %d",a[j],-1);
	}
}

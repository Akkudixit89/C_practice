#include<stdio.h>
int main(){
	int a[]={10,4,1,6,5,7,8};
	int i, j,size=7; //sizeof(a)\sizeof(a[o]);
	int flag;
	for(j=0;j<size;j++)
	{
		flag=-1;
		for(i=j;i<size;i++)
		{
			if(a[i+1]>a[j])
			{
				printf("%d--->%d\n",a[j],a[i+1]);
				flag=1;
				break;
			}
		}
	if(flag==-1)
		printf("%d ---> %d\n",a[j],-1);
	}
}

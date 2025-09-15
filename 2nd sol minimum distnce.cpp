#include<stdio.h>
int main()
{
	int a[]={1,2,3,6,4,7,8};
	int size=7,i,flag1=-1,flag2=-1;
	int index1,index2;
	int num1=2,num2=4;
	for(i=0;i<size;i++)
	{
		if(a[i]==num1)
		{
			index1=i;
			flag1=1;
		}
		else if(a[i]==num2)
		{
			index2=i;
			flag2=1;
		}
    }
	if((flag1==1)&&(flag2==1))
	{
	    printf("%d",index2-index1);
	}
	else
	{
		printf("number not found");
	}
}

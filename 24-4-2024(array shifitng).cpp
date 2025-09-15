//ques1-23/04/2024
//given an array a[] , replace
#include<stdio.h>
int main()
{
	int a[]={1,7,2,9,5,6,3};
	int i,j,size=7;
	int max;
	for(i=0;i<size;i++)
	{
		max=a[i+1];
		for(j=i;j<size;j++)
		{
			if(max<a[j+2])
			{
				max=a[j+2];
				break;
		    }
	    }
	    a[i]=max;
    }
    a[size-1]=-1;
    for(i=0;i<size;i++)
    {
    	printf("%d\n",a[i]);
	}
}
//in above approach as  we are using 2 for loop inside in another for loop due to that time complexity is O(n square) . we want solution which has time complexity O(n)

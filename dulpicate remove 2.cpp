//Given an integer array nums sorted in non-decreasing order,
 //Remove the duplicates in-place such that each unique element appears only once.
//The relative order of the elements should be kept the same.
//Then return the number of unique elements in nums.
#include<stdio.h>
int main()
{
    int a[]={1,1,2,2,3,4,5,5,7,7,8,8},i,j,k,size=sizeof(a)/sizeof(a[0]);
    int n=size;
    for(i=0;i<size;i++)
    {
       for(j=i;j<n;j++)
       {
           if(a[i]==a[j+1])
           {
               
               for(k=i;k<n;k++)
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
    for(i=0;i<n;i++)
    {
        printf("%d    ",a[i]);
    }
}

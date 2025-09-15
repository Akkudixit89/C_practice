#include<stdio.h>
int main(){
    int arr[100],n,i,j,max=0;
    printf("enter no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
        }
    }
    printf("maximum=%d",max);

}

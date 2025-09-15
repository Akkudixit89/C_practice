#include<stdio.h>
int max(int arr[])
{
    int max1,i;
    max1=arr[0];
    for(i=0;i<=4;i++)
    {
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    return max1;
}
int main(){
    int arr[]={2,17,53,24,50};
    int maximum;
    maximum=max(arr);
    printf("the maximum element is %d",maximum);
}
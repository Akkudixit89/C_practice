#include<stdio.h>
int main(){
    int nums[]={1,2,3,4},p[4],i;
    p[0]=nums[0];
    for(i=0;i<4;i++)
    {
        p[i]=nums[i]+p[i-1];
    }
    for(i=0;i<4;i++)
    {
        printf("%d ",p[i]);
    }

}

#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    for (int i=0;i<5;i++)
    {
        printf("%d",*(a+1)); // a= address of first element a[0] , a=100
        // a+1 =100 + 1*size of integer = 100 +1*4=104
        // *(a+1) = *(1+a) = 1[a]
    }
}

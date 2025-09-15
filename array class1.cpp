#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    for (int i=0;i<5;i++)
    {
        printf("%d",*&*&*&a[2]); //cancel out both so a[2] , *&a[0] calcel out so *(address)
    }
}

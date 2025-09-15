#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int sum,i;
    ptr=(int*)malloc(10*sizeof(int));
    printf("enter array elements  =");
    for(i=0;i<10;i++)
    {
        scanf("%p",ptr[i]);
    }
    printf("calculating sum=");
    sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+ptr[i];
    }
    printf("\nsum =%d",sum);
    free(ptr);
}
// add odd numbers from array and count them also
//write a program to input n elements in an array and find the sum of odd elements values and count the odd numbers
#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
    printf("Enter upto 5 Values: ");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        if(a[i]%2==1)
            sum=sum+a[i];
    }
    printf("Total Sum of Odd values is: %d ",sum);
}

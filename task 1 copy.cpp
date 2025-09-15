#include <stdio.h>
 int main()
 {
    int size,Num,found;
    printf("Enter size of array::");
    scanf("%d",&size);
    found=0;
    printf("Enter number to be searched ::");
    scanf("%d",&Num);
    int Arr[size];
    for(int i=0;i<size;i++)
	{
        printf("Enter [%d] element ::",i);
        scanf("%d",&Arr[i]);
    }
    for(int j=0;j<size;j++)
	{
        if(Arr[j]==Num)
		{
            printf("The number found at index %d and the position of the element in the given array is %d.",j,j+1);
            found=1;
        }
    }
    if(found==0)
	{
        printf("Number not found in the given array.");
    }
    return 0;
 }

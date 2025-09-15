#include<stdio.h>
void main()
{
	Print(3);
}
Print(int n)
{
	if(n<1)
	    return -1;
	else
	{
		printf("%d",n);
		Print(n-1);
		printf("%d",n);
	}
}

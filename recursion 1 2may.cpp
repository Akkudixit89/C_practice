//recursion
// print name by 3 times using recursion
//recursion tree

#include<stdio.h>
void main()
{
	Print(3);
}
Print(int n)
{
	if(n==1)
	{
		printf("psit"); 
	}
	else
	{
		Print(n-1);
		printf("psit\n");
	}
}


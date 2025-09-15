#include<stdio.h>
int main()
{
	int n,i;
	for(i=0;i<=100;i++)
	{
		if(i%2!=0)
		{
			continue;
		}
		else
		{
			printf("%d  ",i);
		}
	}
}

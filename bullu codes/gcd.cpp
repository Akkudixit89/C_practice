#include<stdio.h>
int min(int a, int b)
{
	if(a>b)
	return b;
	else 
	return a;
}
int hcf(int a, int b)
{
	int Hcf;
	for(int i=1;i<=min(a,b);i++)
	{
		if(a%i==0&&b%i==0)
		{
			Hcf=i;
		}
	}
	return Hcf;
}
int main()
{
	int a=24,b=60;
	printf("hcf= %d",hcf(a,b));
}

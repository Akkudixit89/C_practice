#include <stdio.h>
#include <math.h>
int main()
{
	int count, i , j,a,b ,n;
	printf("enter a =");
	scanf("\n%d",&a);
	printf("enter b =");
	scanf("\n%d",&b);
	printf("prime numbers between %d and %d are=\n",a,b);
	for (n=a;n<=b;n++)
	{
		count=0;
		for (i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				count=count+1;
			}
			
		}
		if(count==0)
		{
			printf("%d  ",n);
		}
		
	}
	return 0;
}


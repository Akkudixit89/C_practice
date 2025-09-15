#include <stdio.h>
int main()
{
	int n, i , fact;
	char choice;
	do
	{
		printf("\nenter the number:");
		scanf("%d",&n);
		for(i=1,fact=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("\nfactorial of %d = %d",n,fact);
		printf("\nto continue press y:");
		fflush(stdin);
		scanf("%c",&choice);
	}
	while(choice=='y');
	
	printf("\ntask over");
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char a[]={"hello world"};
	int n= strlen(a),i,c;
	for(i=0;i<n/2;i++)
	{
		c=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=c;
	}
	printf("%s",a);
}
	

#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello";
	int i,size;
	while(str[i]!='\0')
	{
		size++;
		i++;
	}
	for(i=size;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}

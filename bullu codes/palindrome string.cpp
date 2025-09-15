#include<stdio.h>
#include<string.h>
int main()
{
	char str[40],rev[40],temp[40];
	int i,size;
	gets(str);
	for(i=0;i<=size;i++)
	{
		temp[i]=str[i];
	}
	while(str[i]!='\0')
	{
		size++;
		i++;
	}
	for(i=size;i>=0;i--)
	{
		puts(str);
	}
	for(i=0;i<=size;i++)
	{
		rev[i]=str[i];
	}
	if(strcmp(temp,rev))
	puts("palindrome");
	else
	puts("not a palindrome");
}

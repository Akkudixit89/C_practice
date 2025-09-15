#include<stdio.h>
#include<string.h>
int main(){
	char str1[]={"silent"};
	char str2[]={"listen"};
	int n=strlen(str1);
	int m=strlen(str2);
	int c1[256]={0};
	int c2[256]={0};
	int i ,j ,flag;
	if(n==m)
	{
		for(i=0;i<n;i++)
		{
			c1[str1[i]]=c1[str1[i]]+1;
		}
		for(i=0;i<m;i++)
		{
			c2[str2[i]]=c2[str2[i]]+1;
		}
	}
	for(i=0;i<256;i++)
	{
		if(c1[i]==c2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("it is not  anagram");
	}
	else
	{
		printf("it is anagram");
	}
	
}

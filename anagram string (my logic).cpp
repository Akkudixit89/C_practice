#include<stdio.h>
#include<string.h>
int main(){
	char str1[]={"silent"};
	char str2[]={"listen"};
	int n =strlen(str1);
	int m = strlen(str2);
	int c1[256]={0};
	int c2[256]={0};
	int i,j;
	if(strlen(str1)==strlen(str2))
	{
	    for(i=0;i<n;i++)
	    {
	        c1[str1[i]]=c1[str1[i]]+1;
	    }
	    for(i=0;i<n;i++)
	    {
	        c2[str2[i]]=c2[str2[i]]+1;
	    }
	}
	if(c1[str1[i]]==c2[str2[i]])
	{
	    printf("it is anagram");
	}
}

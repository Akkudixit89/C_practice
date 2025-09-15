#include<stdio.h>
#include<string.h>
int main(){
	char str[]={"RamaR"};
	int n =strlen(str),i,flag;
	for(i=0;i<n;i++)
	{
	    if(str[i]!=str[n-1-i])
	    flag=1;
	    break;
	}
	if(flag==0)
	printf("\n %s is a palindrome string",str);
	else
	printf("\n %s is not palindrome string",str);
}

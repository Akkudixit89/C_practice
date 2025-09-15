#include<stdio.h>
#include<string.h>
int main(){
	char str[]={"welomew"};
	int n =strlen(str);
	int j,i,count,first_non;
	for(i=0;i<n;i++)
    {
    	count=0;
		for(j=0;j<n;j++)
		{
		     if(str[i]==str[j])
			 count++;
		}
		if(count==1)
		{
			first_non=str[i];
			break;
		}
	}
	printf(" first non-repeated is= %c",first_non);
}

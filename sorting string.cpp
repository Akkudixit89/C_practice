#include<stdio.h>
#include<string.h>
int main(){
	char str[]={"welcome"};
	int n =strlen(str),i,j,temp;
	for(i=0;i<n;i++)
	{
	    for(j=i;j<n;j++)
	    {
	        if(str[i]>str[j+1])
	        {
	            temp=str[i];
	            str[i]=str[j+1];
	            str[j+1]=temp;
	        }
	    }
	}
	for(i=0;i<n;i++)
	{
		printf("%s",str);
	}
}

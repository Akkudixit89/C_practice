#include<stdio.h>
#include<string.h>
int main(){
    int i,j,max=0,maxchar;
	char a[]={"hello world"};
    char c[256]={0};
    int n= strlen(a); //====11
    int m=sizeof(a);
    for(j=0;j<n;j++)
    {
    	c[a[j]]=c[a[j]]+1;
	}
	for(i=0;i<256;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		    maxchar=i;
		}
	}
	printf("%c----%d",maxchar,max);
	
	
}

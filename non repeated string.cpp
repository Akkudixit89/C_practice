#include<stdio.h>
#include<string.h>
int main(){
    int i;
	char a[]={"hello world"};
    char c[256]={0};
    int n= strlen(a); //====11
    int m=sizeof(a);
    for(i=0;i<n;i++)
    {
    	c[a[i]]=c[a[i]]+1;
	}
	for(i=0;i<256;i++)
	{
		if(c[i]==1)
		{
			printf("%c----%d",i,c[i]);
		}
	}

	
}

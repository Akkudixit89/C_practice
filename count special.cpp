#include<stdio.h>
#include<string.h>
int main(){
    int i,digit;
	char a[]={"hello world 1234@**&#$"};
    char c[256]={0};
    int n= strlen(a); //====11
    int m=sizeof(a);
    for(i=0;i<n;i++)
    {
		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
		{
			digit++;
		}
		else if(a[i]>=65)
	}

	
}

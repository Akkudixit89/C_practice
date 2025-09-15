#include<stdio.h>
#include<string.h>
int main(){
	char a[]="helloworld";
	int i;
	int v=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			v++;
		}
	}
	printf("%d",v);
}

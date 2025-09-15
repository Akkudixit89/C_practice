//decimal to binary
#include<stdio.h>
int main(){
	int num,d,binary=0;
	printf("enter any number:");
	scanf("%d",&num);
	while(num>0)
	{
		d=num%2;
		binary=(binary*10)+d;
	    num=num/2;
	}
	printf("%d",binary);
}

#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	max=a>b&&a>c?a:(b>c&&b>a)?b:c;
	printf("greatest is=%d`",max);
}

#include<stdio.h>
int main(){
	int ra,shy,ajay;
	printf("enter ra=");
	scanf("%d",&ra);
	printf("enter shy=");
	scanf("%d",&shy);
	printf("enter ajay=");
	scanf("%d",&ajay);
	if(ra<shy&&ra<ajay)
	printf("ra age is youngest");
	else if(shy<ra&&shy<ajay)
	printf("shy is chotu");
	else
	printf("ajay is chotu");
}

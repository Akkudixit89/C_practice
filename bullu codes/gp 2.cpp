#include<stdio.h>
#include<math.h>
// series=3,12,48,.....
int main(){
	int i,n;
	printf("enter n=");
	scanf("%d",&n);
	for(i=3;i<=3*pow(4,n-1);i=i*4)
	printf("%d ",i);
}

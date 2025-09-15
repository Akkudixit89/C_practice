//GP
//series=1,2,4,8,16,32,......
#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=pow(2,n-1);i=i*2)
	printf("%d ",i);
}

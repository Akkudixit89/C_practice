#include<stdio.h>
int main(){
while(1){
	int i,num,sum=0;
	printf("enter number=\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(num==sum)
	printf("perfect number\n");
	else
	printf("not an perfect number\n");
}
}

#include<stdio.h>
#include<math.h>
int main(){
	int c,num,temp,d,sum;
	for(num=1;num<=100;num++)
	{
		temp=num;
		c=0;
		while(temp!=0)
		{
			c++;
			temp=temp/10;
		}
		temp=num;
		sum=0;
		while(temp!=0)
		{
			d=d%10;
			sum=sum+pow(d,c);
			temp=temp/10;
		}
		if(sum==num)
		{
			printf(" %d ",num);
		}
	}
}

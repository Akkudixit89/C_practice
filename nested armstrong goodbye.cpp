#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,a,b,len,num,n2,temp,sum,di;
	printf("enter a and b =");
	scanf("%d %d",&a,&b);
	printf("print the armstrong number between  %d and  %d are ",a,b);
	for (i=a;i<=b;i++)
	{
		    len=0;
		    sum=0;
			temp=num=i;
	        while(num!=0)
	        {
		        len=len+1;
	      	    num=num/10;
	        }
	        while(temp!=0)
	        {
		        di=temp%10;
		        sum=sum+pow(di,len);
		        temp=temp/10;
	        }
	        if(sum==i)
	        {
		    printf("%d  ",sum);
	        }
	        
	        
	}
}

#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,a,b,len=0,num,n2,temp,sum=0,di;
	printf("enter a and b =");
	scanf("%d %d",&a,&b);
	printf("print the armstrong number between a %d and b %d are ",a,b);
	for (i=a,i<=b,i++)
	{
		    temp=n2=num;
	        while(num!=0)
	        {
		        len=len+1;
	      	    num=num/10;
	        }
	        while(n2!=0)
	        {
		        di=n2%10;
		        sum=sum+pow(di,len);
		        n2=n2/10;
	        }
	        if(sum==i)
	        {
		    printf("%d",temp);
	        }
	        
	        
	}
}

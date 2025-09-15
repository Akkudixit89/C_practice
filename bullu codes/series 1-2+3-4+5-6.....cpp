//// series questions 1-2+3-4+5-6+......upto n terms
//#include<stdio.h>
//int main(){
//	int term,i,sum=0;
//	printf("enter the term =");
//	scanf("%d",&term);
//	for(i=1;i<=term;i++)
//	{
//		if(i%2==0)
//	    {
//		    printf("%d + ",i);
//		    sum=sum-i;
//	    }
//	    else
//	    {
//	    	printf("%d - ",i);
//	        sum=sum+i;
//		}
//	}
//	printf("\nsum =%d\n",sum);
//}



//2nd method
#include<stdio.h>
int main(){
	int n,sum=0;
	printf("enter the term =");
	scanf("%d",&n);
	if(n%2==0)
	sum=-n/2;
	else
	{
	    sum=(-n/2)+n;
    }
    printf("sum= %d",sum);
}


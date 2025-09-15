//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main(){
//	int n,choice,fact=1,m=n,i,sum,d, count;  
//	printf("enter n =");
//	scanf("%d",&n);
//	printf("enter choice =\n");
//	printf("1.to calculate factorial\n 2.to print table\n 3.to check whether the no. is even or odd\n 4.to print the sum of digits\n 5.to check prime\n 6.to exit \n");
//	scanf("%d",&choice);
//	switch(choice)
//	{
//		case 1:
//			while(n>0)
//			{
//				fact=fact*n;
//				n=n-1;
//			}
//			printf("factorial is %d",fact);
//			break;
//		case 2:
//			for(i=1;i<=10;i++)
//			{
//				printf("%d X %d=%d \n,n,i,(n*i)");
//			}
//			break;
//		case 3:
//			if(n%2==0)
//			{
//				printf("even");
//			}
//			else
//			{
//				printf("odd");
//			}
//			break;
//		case 4:
//			sum=0;
//			while(n!=0)
//			{
//				d=n%10;
//				sum=sum+d;
//				n=n/10;
//			}
//			printf("sum of digits= %d",sum);
//			break;
//		case 5:
//			for(i=2;i<=sqrt(n);i++)
//			{
//				if(n%i==0){
//					count++;
//				}
//			}
//			    if(count==0){
//			    	printf("prime");
//				}
//				else
//				{
//					printf("not a prime");
//				}
//			break;
//		default:
//			printf("invalid choice");
//			break;
//		case 6:
//			exit(0);
//		
//			
//	}
//
//	
//	
//	
//}

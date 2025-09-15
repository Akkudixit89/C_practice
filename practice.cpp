//#include <stdio.h>
//#include <math.h>
//int main ()
//{
//	int n,i,count=0;
//	printf("enter number :");
//	scanf("%d",&n);
//	for(i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			count=count+1;
//		}
//	}
//	if(count==0)
//	printf("is prime");
//	else
//	printf("is not prime");
//	
//}

//#include <stdio.h>
//#include<conio.h>
//int main()
//
//{
//while(1)	{
//
//	int a ;
//	printf("\nenter a =");
//	scanf("%d",&a);
//	if(a%2==0)
//	printf("even");
//	else
//	printf("odd");
//	getch();
//}
//}

//#include <stdio.h>
//int main(){
//	int a,b,rem,gcd=1;
//	printf("enter a");
//	scanf("%d",&a);
//	printf("enter b");
//	scanf("%d",&b);
//	while(1)
//	{
//		rem=a%b;
//		if(rem==0)
//		{
//			gcd=b;
//			break;
//		}
//		else
//		{
//			a=b;
//			b=rem;
//		}
//	}
//	printf("%d",gcd);
//	return 0;
//	
//}

// print all prime numbers within the range
//#include <stdio.h>
//#include <math.h>
//int main(){
//	int a , b ,count=0,i,j;
//	printf("enter two numbers a and b ");
//	scanf("%d %d",a , b );
//	for(i=a,i<=b,i++)
//	{
//		for(j=2,j<=sqrt(n))
//	}
//	
//	
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	
//	int a , b , count,i,n;
//	printf("enter the range a and b");
//	scanf("%d %d",&a,&b);
//	for(n=a;n<=b;n++)
//	{
//		if(n==1)
//		    continue;                    //0((b-a)*sqrt(n))
//		count=0;
//		for(i=2;i<=sqrt(n);i++)
//		{
//			if(n%i==0)
//			{
//				count=count+1;
//			}
//		}
//		if(count==0)
//		{
//			printf("%d ",n);
//		}
//		
//	}
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	
//	int a , b , count,i,n,len=0,num,n2,temp,sum=0,di;
//	printf("enter the range a and b");
//	scanf("%d %d",&a,&b);
//	for(n=a;n<=b;n++)
//	{
//	temp=n2=num;
//	while(num!=0)
//	{
//		len=len+1;
//		num=num/10;
//	}
//	while(n2!=0)
//	{
//		di=n2%10;
//		sum=sum+pow(di,len);
//		n2=n2/10;
//	}
//	if(temp==sum)
//	printf("%d",temp);
//	}
//}



//#include <stdio.h>
//int main()
//{
//	int i , j,n;
//	printf("enter rows that is n =");
//	scanf("%d",&n);
//	for(i=1;i<n;i++)
//	{
//		for(j=1;j<n;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main(){
//	int i , j ;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%c",j+64);
//		}
//		printf("\n");
//	}
//}
//

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%c",char(j));
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i, j,k,n;
//	printf("enter row");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)                  //for row
//	{
//		for(k=1;k<=n-i;k++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//	int i, j,k,n,c=1;//c variable to be printed
//	printf("enter row");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)                  //for row
//	{
//		for(k=1;k<=n-i;k++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",c++);
//		}
//		printf("\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//	int i, j,k,n;
//	printf("enter row");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)                  //for row
//	{
//		for(k=1;k<=n-i;k++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=(2*i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//    }
//}

//#include <stdio.h>
//int main()
//{
//	int i, j,k,n;
//	printf("enter row");
//	scanf("%d",&n);
//	for(i=n;i>=1;i--)                  //for row
//	{
//		for(k=1;k<=n-i;k++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=i;j++)
//		{
//			printf("%c",j+64);
//		}
//		printf("\n");
//    }
//}

#include <stdio.h>
int main()
{
	int i, j,k,n;
	printf("enter row");
	scanf("%d",&n);
	for(i=1;i<n-1;i++)                  //for row
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*",j);
		}
		printf("\n");
    }
	for(i=n;i>=1;i--)                  //for row
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("*",j);
		}
		printf("\n");
    }
}







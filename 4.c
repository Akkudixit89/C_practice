#include<stdio.h>
#include<math.h>
int main(){
    int num,d,c,temp,sum;
    printf("enter num=");
    scanf("%d",&num);
    temp=num;
    c=0;
    while(num!=0)
    {
        d=num%10;
        c++;
        num=num/10;
    }
    printf("the count of digit is=%d\n",c);
    num=temp;
    sum=0;
    while(num!=0)
    {
        d=num%10;
        sum=sum+pow(d,c);
        num=num/10;
    }
    printf("sum is=%d\n",sum);
    if(temp==sum)
    printf("armstrong\n");
    else
    printf("not armstrong\n");
}

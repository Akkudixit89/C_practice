#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",pow(k,2));
            k++;
        }
        printf("\n");
    }
}

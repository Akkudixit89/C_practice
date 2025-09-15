struct node{
    int data;
    struct node *next;
};
#include<stdio.h>
#include<stdlib.h>
struct node *newnode, *start, *temp,*temp1;
void length()
{
	int count=0;
    temp1=start;
    while(temp1!=0)
    {
        printf("%d\n",temp1->data);
        temp1=temp1->next;
        count++;
    }
    printf("\nthe number of nodes in linked list=%d",count);
}
int main()
{
    start=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node");
        scanf("%d",&newnode->data);
        if(start==0)
        {
            start=newnode=temp;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to enter more node(),1)?");
        scanf("%d",&choice);
    }
   
}

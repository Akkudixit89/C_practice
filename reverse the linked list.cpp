#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *start,*newnode,*temp,*newnode1,*newnode2,*newnode3,*current;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=1;
	start =newnode;
	current=start;
	newnode1=(struct node *)malloc(sizeof(struct node));
	newnode->next=newnode1;
	newnode1->data=10;
	newnode2=(struct node *)malloc(sizeof(struct node));
	newnode2->data=100;
	newnode1->next=newnode2;
	newnode3=(struct node *)malloc(sizeof(struct node));
	newnode3->data=1000;
	newnode2->next=newnode3;
	newnode3->next='\0';
	temp=start;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("reverse linked list are as follows=\n");
	
	current=newnode3;
	while(current!='\0')
	{
		newnode3->next=newnode2;
	newnode2->next=newnode1;
	newnode1->next=newnode;
	newnode='\0';
		printf("%d\n",current->data);
		current=current->next;
	}
	
}



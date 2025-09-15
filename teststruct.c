#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *start,*newnode,*temp,*newnode1,*newnode2,*newnode4;
	newnode=malloc(sizeof(struct node));
	newnode->data=1;
	start =newnode;
	newnode1=malloc(sizeof(struct node));
	newnode->next=newnode1;
	newnode1->data=10;
	newnode2=malloc(sizeof(struct node));
	newnode2->data=100;
	newnode2->next='\0';
	newnode1->next=newnode2;
	printf("\ninsert node at first\n");
	newnode4=malloc(sizeof (struct node));
	newnode4->data=23;
	newnode4->next=newnode;
	start =newnode4;
	temp=start;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}

	
	
}

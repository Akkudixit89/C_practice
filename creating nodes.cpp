#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *start,*newnode,*temp,*newnode1;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=2;
	start =newnode;
	newnode1=(struct node*)malloc(sizeof(struct node));
	newnode->next=newnode1;
	newnode1->data=3;
	newnode1->next='\0';
	temp=start;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
	
}

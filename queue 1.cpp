#include<stdio.h>
#define size 5
int queue[size];
int front=-1;
int enqueue();
int rear=-1;
int enqueue(int data)
{
	if(rear=size-1)
	{
		printf("overflow\n");
	}
	if(front==-1)
		{
			front++;
		}
	else
	{
		rear=rear+1;
		queue[rear]=data;
	}
}
int dequeue()
{
	if(front==-1&&rear==-1)
	{
		printf("underflow");
	}
	front++;
}
int main(){
	int i;
	printf("enter\n ");
	enqueue(10);
	enqueue(25);
	enqueue(35);
	enqueue(45);
	printf("queue after inserting your element");
	for(i=front;i<rear;i++)
	{
		printf("%d\n",queue[i]);
	}
	dequeue();
	dequeue();
	for(i=front;i<=rear;i++);
	{
		printf("after dequeue");
		printf("%d",queue[i]);
	}
}

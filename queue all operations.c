#include<stdio.h>
#define size 200
int queue[size];
int front=-1;
int rear=-1;
int enqueue(int data)
{
	if(rear==size-1)
	{
		printf("overflow\n");
	}
	else
	{
		rear=rear+1;
		queue[rear]=data;
		if(front==-1)
		front++;
	}
}
int dequeue(){
	int data;
	if(front==-1)
	{
		printf("underflow");
	}
	else
	{
		data=queue[front];
		front++;
	}
	return data;
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(45);
	enqueue(65);
	printf("traversing=\n");
	int i , j;
	for(i =front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
	printf("\ndequeue element=%d\n",dequeue());
	for(j =front;j<=rear;j++)
	{
		printf("%d\n",queue[j]);
	}
	
}

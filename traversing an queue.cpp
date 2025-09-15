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
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(45);
	enqueue(65);
	printf("traversing=\n");
	for(int i =front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
}

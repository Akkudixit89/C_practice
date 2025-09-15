#include<stdio.h>
#define size 200
int queue[size];
int front=-1;
int rear=-1;
int top = -1;
int push();
int pop();
int STACK[size];
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
	if(front==-1)
	{
		printf("underflow");
	}
	else
	{
		int y=queue[front];
		push(y);
		front++;
	}
}
int push(int data)
{
    if (top == size - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        top = top + 1;
        STACK[top] = data;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        return STACK[top--];
    }
}
int kelement(int k)
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(45);
	enqueue(65);
	int i,y;
	printf("queue before=");
	for(i =front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
	dequeue();
	dequeue();
	dequeue();
	for(i=top;i>=0;--i)
	{
		y=pop();
		enqueue(y);
	}
	printf("queue after reverse\n=");
	for(i =front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
}

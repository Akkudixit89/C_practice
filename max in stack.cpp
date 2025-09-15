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
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(11);
	enqueue(12);
	int max=queue[0],i;
	for(i=1;i<4;i++)
	{
		if(max<queue[i])
		{
			max=queue[i];
		}
	}
	printf("maximum value  =%d",max);
	
	
}

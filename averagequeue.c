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
	int sum=0;
	float average;
	enqueue(10);
	enqueue(20);
	enqueue(11);
	enqueue(12);
	int i;
	for(i=0;i<4;i++)
	{
		sum=sum+queue[i];
	}
	average=(float)sum/4;
	printf("average =%f",average);
	
	
}

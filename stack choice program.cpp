#include <stdio.h>
#include<stdlib.h>
#define SIZE 6
int top = -1, 
STACK[SIZE];
int push();
int pop();
int traverse();

int main()
{
    int choice;
    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push\n2.Pop\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

int push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        STACK[top] = x;
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
        printf("\nPopped element: %d", STACK[top]);
        top = top - 1;
    }
}

int traverse()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
    	printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", STACK[i]);
    }
}

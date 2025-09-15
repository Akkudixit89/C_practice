#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int stack[SIZE];
int top = -1;
int push(int x) 
{
    if (top == SIZE - 1)
	{
        printf("Overflow stack!\n");
    }
    top++;
    stack[top] = x;
}
int pop()
{
    if (top == -1) 
	{
        printf("Empty stack!\n");
        return -1;
    }
    int x = stack[top];
    top--;
    return x;
}
int greater_element(int arr[], int n)
 {
    int i, next, element;
    push(arr[0]);
    for (i = 1; i < n; i++)
	{
        next = arr[i];
        if (top != -1) 
		{
            element = pop();
            while (element < next) 
			{
                printf("%d --> %d\n", element, next);
                if (top == -1) 
				{
                    break;
                }
                element = pop();
            }
            if (element > next) 
			{
                push(element);
            }
        }
        push(next);
    }

    if(top != -1) 
	{
        element = pop();
        printf("%d --> %d\n", element, -1);
    }
}

int main() {
    int n = 6;
    int i = 0;
    int arr[n] = {1, 2, 3, 4, 5, 6};
    printf("\nThe next larger elements are: \n");
    greater_element(arr, n);
    return 0;
}

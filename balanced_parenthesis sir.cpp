#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 1000 // Maximum size of the stack
// Function to check if the stack is empty

// Function to push an element onto the stack
void push(char stack[], int *top, char value) {
    if (*top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
   
    stack[*top] = value;
     *top++;
}
// Function to pop an element from the stack
char pop(char stack[], int *top) {
    if (*top == -1) 
{
        printf("Stack underflow\n");
        return '\0';
    }
    return stack[*top];
    *top--;
}
// Function to check if the parentheses are balanced
bool Balancedcheck(char *str) 
{
    char stack[MAX];
    int top = -1;
 for (int i = 0; i < strlen(str); i++) {
        char current = str[i];
  if (current == '(' || current == '{' || current == '[') {
            push(stack, &top, current);
        } else if (current == ')' || current == '}' || current == ']') {
            if (top==-1) {
                return false;
            }
 char topChar = pop(stack, &top);
            if ((current == ')' && topChar != '(') ||
                (current == '}' && topChar != '{') ||
                (current == ']' && topChar != '[')) {
                return false;
            }
        }
    }
if(top==-1)
{
    return true;
}
}
int main() {
    char str1[] = "([]){}";
   
    printf("Expression: %s, Balanced: %s\n", str1, Balancedcheck(str1) ? "true" : "False");
      return 0;
}


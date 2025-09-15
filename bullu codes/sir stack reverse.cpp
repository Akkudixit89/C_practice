#include <stdio.h>  
#include <string.h>  
#define size 100  
int top=-1;
char stack[size];  
char output[100];
char str[]="welcome"; 

int push(char x)
{   
      if(top == size-1)
	  {  
          printf("overflow condition");  
      }  
	  else 
	  {  
          top++;
		  stack[top]=x;  
      }
  
}  
int pop()
{  
    if(top==-1)
    {
      	printf("\n underflow condition");
      	
	}
	else
	{
		int x=stack[top];
		top=top-1;
		return x;
	}
}  
  
  
int main()  
{  
   char str[]="welcome";  
   int n= strlen(str);  
   int i; 
   for(i=0;i<n;i++)  
        push(str[i]);  
   for(i=0;i<n;i++)  
        output[i]=pop();  
	for(i=0;i<n;i++)
	{
		printf("%c",output[i]);
	}
}  

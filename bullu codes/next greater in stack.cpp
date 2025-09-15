#include <stdio.h>  
#include <string.h>  
int main(){
	push=a[0];
	for(i=1;i<n;i++)
	{
		next=a[i];
		element=pop();
		while(element<next)
		{
			printf("%d----->%d",element,next);
			if(top==-1)
			{
				break;
			}
			else
			element=pop()
		}
	}
}


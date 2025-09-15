#include <stdio.h>
#include<stdlib.h>
#define SIZE 7
for(i=0;i<=strlen(str);i++)
{
	char current=str[i];
}
if(current=='{'||current=='('||current=='[')
{
	push(current);
}
else if(current=='}'||current==')'||current==']')
{
	char data=pop();
	if(data=='('&&current!=')'||data=='{'&&current!='}'||data=='['&&current!=']')
}

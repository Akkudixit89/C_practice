#include<stdio.h>
typedef struct student{
	int rollno;
	char name[20];
}y;
int main(){
y s1={1234,"ram"};
printf("%d %s",s1.rollno,s1.name);
}

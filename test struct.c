#include<stdio.h>
#include<stdlib.h>
struct student{
	int rollno;
	int *ptr;
}s1,s2;
int main(){
	s1.rollno=10;
	s1.ptr=&s2;
	printf("%d\n",s1.rollno);
	printf("%d\n",s1.ptr);
	
}

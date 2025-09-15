#include<stdio.h>
struct student{
	int rollno;
	char name[20];
};
int main(){
	struct student s1={1234,"ram"};
	printf("%d %s",s1.rollno,s1.name);
}

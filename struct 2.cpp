#include<stdio.h>
struct employee{
	int employee_id;
	char name[20];
	char dob[20];
	
};
int main(){
	struct employee s1={1234,"ram","20-10-2006"};
	printf("id=%d  name=%s  year=%s",s1.employee_id,s1.name,s1.dob);
	struct employee s2={3456,"shyaam","2-4-2005"};
	printf("\nid=%d  name=%s  year=%s",s2.employee_id,s2.name,s2.dob);
}

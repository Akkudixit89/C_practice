#include<stdio.h>
struct employee{
	int employee_id;
	float salary;
	struct dateofjoining_employee{
		int date;
		int month;
		int year;
	};
	struct dateofjoining_employee date;
}s1,s2,s3;
int main(){
	struct employee s1={1234,56.7};
	printf("id=%d  salary=%f  year=%s",s1.employee_id,s1.salary,s1.date);
	struct employee s2={3456,78.9,};
	printf("\nid=%d  salary=%f  year=%s",s2.employee_id,s2.salary,s2.date);
	struct employee s3={6789,7645.9};
	printf("\nid=%d  salary=%f  year=%s",s2.employee_id,s2.salary,s2.date);
}

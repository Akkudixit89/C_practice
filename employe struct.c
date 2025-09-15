#include<stdio.h>
struct employee{
	int id;
	float salary;
	struct date_of_joining
	{
		int date;
		int month;
		int year;
		
	}doj;
}emp1,emp2,emp3;
int main(){
	emp1.id=1;
	emp2.id=2;
	emp3.id=3;
	emp1.salary=21.00;
	emp2.salary=25.00;
	emp3.salary=45.00;
	emp1.doj.month=4;
	emp1.doj.date=20;
	emp1.doj.year=2004;
	emp2.doj.month=5;
	emp2.doj.date=21;
	emp2.doj.year=2005;
	emp3.doj.month=8;
	emp3.doj.date=12;
	emp3.doj.year=2009;
	printf("%d\n",emp1.id);
	printf("%f\n",(float)emp1.salary);
	printf("%d\n",emp1.doj.month);
	printf("%d\n",emp1.doj.date);
	printf("%d\n",emp1.doj.year);
	
}

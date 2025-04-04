#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf

main() {
	long int salary, hra = 10, da = 5, ta = 8, grossSalary;
	clrscr();

	p("Enter Your Base Salary : ");
	s("%ld",&salary);

	p("House Rent Allowance = %ld\n",salary * hra / 100);

	p("Dearness Allowance = %ld\n",salary * da / 100);

	p("Tax Allowance = %ld\n\n",salary * ta / 100);

	grossSalary = salary + hra + da + ta;

	p("Gross Salary = %ld",grossSalary);

	getch();
}
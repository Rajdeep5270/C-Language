#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf

main() {
	long int salary, hra, da, ta, grossSalary;
	clrscr();

	p("Enter Your Base Salary : ");
	s("%ld",&salary);

	hra = salary * 10 / 100;
	p("House Rent Allowance = %ld\n",hra);

	da = salary * 5 / 100;
	p("Dearness Allowance = %ld\n",da);

	ta = salary * 8 / 100;
	p("Tax Allowance = %ld\n\n",ta);

	grossSalary = salary + hra + da + ta;

	p("Gross Salary = %ld",grossSalary);

	getch();
}
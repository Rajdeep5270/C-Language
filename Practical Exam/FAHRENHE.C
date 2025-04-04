#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf

main() {
	float cel, calc;
	clrscr();

	// celsius to Fahrenheit Calculator
	p("Enter Temperature in Celsius : ");
	s("%f",&cel);

	calc = (cel * 1.8) + 32;

	p("The Temperature in Fahrenheit = %.1f",calc);

	getch();
}
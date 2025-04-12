#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf
#define c clrscr
#define g getch

main() {
	int a, b;
	c();

	p("Enter First Number : ");
	s("%d",&a);

	p("Enter Second Number : ");
	s("%d",&b);

	if(a < b) {
		c();
		p("%d is Minimum",a);
	}
	else{
		c();
		p("%d is Minimum",b);
	}

	g();
}
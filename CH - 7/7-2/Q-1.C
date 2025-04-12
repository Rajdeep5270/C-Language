#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf
#define r clrscr
#define g getch

main() {
	int a, b, c;
	r();

	p("Enter First Number : ");
	s("%d",&a);

	p("Enter Second Number : ");
	s("%d",&b);

	p("Enter Third Number : ");
	s("%d",&c);

	if(a > b) {
		if(a > c) {
			p("%d is Greater",a);
		}
		else{
			p("%d is Greater",c);
		}
	}
	else{
		if(b > c) {
			if(b > a) {
				p("%d is Greater",b);
			}
			else{
				p("%d is Greater",a);
			}
		}
		else{
			p("%d is Greater",c);
		}
	}

	g();
}
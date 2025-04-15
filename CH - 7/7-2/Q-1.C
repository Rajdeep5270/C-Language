#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf

main() {
	int a, b, c;
	clrscr();

	p("Enter First Value : ");
	s("%d",&a);

	p("Enter Second Value : ");
	s("%d",&b);

	p("Enter Third Value : ");
	s("%d",&c);

	if(a == b && b == c && c == a) {
		clrscr();
		p("All Are Same...");
	}
	else if(a == b || b == c || c == a) {
		clrscr();
		p("Both Are Equal...");
	}
	else{
		if(a > b) {
			if(a > c) {
				p("%d is Maximum",a);
			}
			else{
				p("%d is Maximum",c);
			}
		}
		else{
			if(b > c) {
				p("%d is Maximum",b);
			}
			else{
				p("%d is Maximum",c);
			}
		}
	}

	getch();
}
#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf
#define c clrscr
#define g getch

main() {
	int num;
	c();

	p("Enter Any Number to Find its type : ");
	s("%d",&num);

	if(num > 0) {
		c();
		p("%d is Positive",num);
	}
	else if(num == 0) {
		c();
		p("%d is Neutral",num);
	}
	else{
		c();
		p("%d i Negative",num);
	}

	g();
}
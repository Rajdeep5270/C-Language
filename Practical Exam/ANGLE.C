#include<stdio.h>
#include<conio.h>

#define p printf
#define s scanf

main() {
	int fa, sa, ta;
	clrscr();

	p("Enter First Angle : ");
	s("%d",&fa);

	p("Enter Second Angle : ");
	s("%d",&sa);

	ta = fa + sa;
	ta = 180 - ta;

	p("Third Angle : %d",ta);

	getch();
}
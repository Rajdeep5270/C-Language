#include<stdio.h>
#include<conio.h>

main() {
	float sum, r , pi = 3.14;
	clrscr();

	printf("Enter Radius : ");
	scanf("%f" , &r);
	sum = pi * r * r;

	printf("The Area of the circle is %.2f" , sum);

	getch();
};                                             f
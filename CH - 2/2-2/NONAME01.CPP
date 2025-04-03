#include<stdio.h>
#include<conio.h>

main() {

	float length , sum;

	clrscr();

	printf("Enter The Length Here : ");
	scanf("%f", &length);

	sum = length * length;

	printf("The area of square is %f" , sum);

	getch();
};
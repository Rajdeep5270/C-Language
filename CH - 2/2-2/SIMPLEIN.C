#include<stdio.h>
#include<conio.h>

main() {
	float amount , rate , period , sum;
	clrscr();

	printf("Enter Amount : ");
	scanf("%f", &amount);

	printf("Enter Rate : ");
	scanf("%f", &rate);

	printf("Enter period : ");
	scanf("%f", &period);

	sum = amount * rate * period / 100;

	printf("The Simple Interest is = %.2f",sum);

	getch();
}
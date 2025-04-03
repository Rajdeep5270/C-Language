#include<stdio.h>
#include<conio.h>

main() {
	float base , height, sum;
	clrscr();

	printf("Enter the Base of Triangle : ");
	scanf("%f" , &base);

	printf("Enter the Height of Triangle : ");
	scanf("%f" , &height);

	sum = 0.5 * base * height;

	printf("The Area of Triangle is = %.2f" , sum);

	getch();
};
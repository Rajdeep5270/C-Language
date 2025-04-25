#include<stdio.h>
#include<conio.h>

main() {
	int n, last, first, temp;
	clrscr();

	printf("Write Any Number : ");
	scanf("%d",&n);

	temp = n;

	n = n % 10;
	last = n;

	while(temp > 9) {
		temp = temp / 10;
	}
	first = temp;

	n = last + first;

	printf("Sum = %d",n);

	getch();
}
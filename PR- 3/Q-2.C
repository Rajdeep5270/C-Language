#include<stdio.h>
#include<conio.h>

main() {
	int n, count = 0;
	clrscr();

	printf("Write Any Number : ");
	scanf("%d",&n);

	while(n != 0) {
		count++;
		n = n / 10;
	}

	printf("Digits = %d",count);

	getch();
}
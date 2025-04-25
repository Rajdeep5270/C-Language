#include<stdio.h>
#include<conio.h>

main() {
	int n, i = 1, a = 0, b = 1, c;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	do{
		c = a + b;
		printf("%d +", c);
		a = b;
		b = c;
		i++;

	}while(i <= n);

	getch();
}
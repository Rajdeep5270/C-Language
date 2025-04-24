#include<stdio.h>
#include<conio.h>

main() {
	int i = 1, n;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	clrscr();
	while(i <= 10) {
		printf("%d X %d = %d\n", n, i, n*i);
		i++;
	}

	getch();
}
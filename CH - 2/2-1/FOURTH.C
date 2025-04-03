#include<stdio.h>
#include<conio.h>

main() {
	int a = 5;
	clrscr();

	printf("- - - - - - - - \n");
	printf("|              |\n");
	printf("| %d X %d = %d   |\n", a, a , a * a);
	printf("|              |\n");
	printf("- - - - - - - - \n");

	getch();
}
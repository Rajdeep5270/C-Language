#include<stdio.h>
#include<conio.h>

main() {
	int i, j;
	clrscr();

	for(i = 1; i <= 5; i++) {

		for(j = 5; j >= i; j--) {
			printf("%d",i);
		}
		printf("\n");
	}

	getch();
}
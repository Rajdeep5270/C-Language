#include<stdio.h>
#include<conio.h>

main() {
	int i, j, s;
	clrscr();

	for(i = 10; i >= 6; i--) {

		for(s = 6; s < i; s++) {
			printf(" ");
		}

		for(j = 10; j >= i; j--) {
			printf("%d",i);
		}
		printf("\n");
	}

	getch();
}
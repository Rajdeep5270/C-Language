#include<stdio.h>
#include<conio.h>

main() {
	int i, j;
	clrscr();

	for(i = 1; i <= 5; i++) {     // row

		for(j = i; j >= 1; j--) {   // columnd
			printf("%d",j);
		}
		printf("\n");
	}

	getch();
}
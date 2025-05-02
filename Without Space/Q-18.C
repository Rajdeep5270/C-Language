#include<stdio.h>
#include<conio.h>

main() {
	int i, j;
	clrscr();

	for(i = 1; i <= 5; i++) {

		for(j = 1; j <= i; j++) {
			(j%2==0)?	printf("1")
				:       printf("0");
		}
		printf("\n");
	}

	getch();
}
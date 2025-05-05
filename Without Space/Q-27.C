#include<stdio.h>
#include<conio.h>

main() {
	int i, j;
	clrscr();

	for(i = 5; i >= 1; i--) {

		for(j = 1; j <= i; j++) {
			if(i % 2 == 0) {
				if(j % 2 == 0) {
					printf(" %d ", j * 100);
				}
				else{
					printf(" %c ",j + 96);
				}
			}
			else{
				if(j % 2 == 0) {
					printf(" %d ",j * 100);
				}
				else{
					printf(" %d ",j * 10);
				}
			}
		}
		printf("\n");
	}

	getch();
}
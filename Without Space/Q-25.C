#include<stdio.h>
#include<conio.h>

main() {
	int i, j;
	clrscr();

	for(i = 5; i >= 1; i--) {

		for(j = 1; j <= i; j++) {
			if(i % 2 == 0) {
				printf("%c",j+64);
			}
			else{
				if(j % 2 == 0) {
					printf("%c",j+96);
				}
				else() {
					printf("%d",j);
				}
			}
		}
		printf("\n");
	}

	getch();
}
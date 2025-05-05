#include<stdio.h>
#include<conio.h>

main() {
	int i,j;
	clrscr();

	for(i = 5; i >= 1; i--) {

		for(j = i; j <= 5; j++) {
			if(i % 2 == 0) {
				if(j % 2 == 0) {
					printf("%c",j+96);
				}
				else{
					printf("%d",j);
				}
			}
			else{
				if(j % 2 != 0) {
					printf("%c",j+96);
				}
				else{
					printf("%d",j);
				}
			}
		}
		printf("\n");
	}

	getch();
}
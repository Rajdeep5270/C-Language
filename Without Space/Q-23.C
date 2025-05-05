#include<stdio.h>
#include<conio.h>

main() {
	int i, j;
	//char j;
	clrscr();

	for(i = 1; i <= 5; i++) {

		for(j = i; j <= 5; j++) {
			if(i % 2 == 0) {
				printf("%d",i);
			}
			else{
				printf("%c",j+96);
			}
		}
		printf("\n");
	}

	getch();
}
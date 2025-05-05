#include<stdio.h>
#include<conio.h>

main() {
	int i,j,count=0;
	clrscr();

	for(i = 100; i <= 500; i+=100) {

		for(j = 100; j <= i; j+=100) {
			printf(" %d ",count+=100);
		}
		printf("\n");
	}

	getch();
}
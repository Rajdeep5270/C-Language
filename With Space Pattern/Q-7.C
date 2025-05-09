#include<stdio.h>
#include<conio.h>

main() {
	int i, j, s, count = 1;
	clrscr();

	for(i = 1; i <= 5; i++) {

		for(s = 1; s < i; s++) {
			printf(" ");
		}

		for(j = i; j <= 5; j++) {
			(j % 2 == 0) 	? 	printf("%c",count + 96)
					:	printf("%c",count + 64);
			count++;
		}
		printf("\n");
	}

	getch();
}
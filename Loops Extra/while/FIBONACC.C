#include<stdio.h>
#include<conio.h>

main() {
	int n, i = 0, first = 0, second = 1, next;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	while(i <= n) {
		if(i <= 1) {
			next = i;
		}
		else{
			next = first + second;
			first = second;
			second = next;
		}
		i++;
		printf(" %d + ",next);
	}

	getch();
}
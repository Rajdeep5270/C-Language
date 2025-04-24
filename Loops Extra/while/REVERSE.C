#include<stdio.h>
#include<conio.h>

main() {
	int n, rem, rev=0;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	while(n != 0) {
		rem = n % 10;

		rev = rev * 10 + rem;

		n = n / 10;
	}

	printf("Reversed = %d",rev);

	getch();
}

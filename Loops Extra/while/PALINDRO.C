#include<stdio.h>
#include<conio.h>

main() {
	int n, rem, rev=0, num;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	num = n;

	while(n != 0) {
		rem = n % 10;

		rev = rev * 10 + rem;

		n = n / 10;
	}

	if(rev == num) {
		printf("The Number is Palindrom.");
	}
	else {
		printf("The Number is Not Palindrom.");
	}

	getch();
}

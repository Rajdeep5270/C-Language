#include<stdio.h>
#include<conio.h>

main() {
	int n, rem, sum = 0, mul = 1;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	do{
		rem = n % 10;
		sum += rem;
		mul *= rem;
		n = n /10;

	}while(n != 0);

		if(sum == mul) {
			printf("Magic Number.");
		}
		else{
			printf("Not a Magic Number.");
		}

	getch();
}
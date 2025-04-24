#include<stdio.h>
#include<conio.h>

main() {
	int n, sum = 0, mul = 1, temp, rem;
	clrscr();

	printf("\n\n\t\t\tProgram to Check Magic Number\n\n");
	printf("\t\t\t\tEnter Number : ");
	scanf("%d",&n);

	temp = n;
	while(temp != 0) {
		rem = temp % 10;
		sum += rem;
		mul *= rem;
		temp = temp / 10;
	}

	if(sum == mul) {
		printf("\t\t\t\t%d & %d is a Magic Number.", sum, mul);
	}
	else {
		printf("%d & %d is Not a Magic Number.", sum, mul);
	}


	getch();
}
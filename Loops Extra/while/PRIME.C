#include<stdio.h>
#include<conio.h>

main() {
	int n, i = 2;
	clrscr();

	printf("Prime Number Checker : ");
	scanf("%d",&n);

	while(i <= n) {
		if(n % i == 0) {
			printf("%d is a Prime Number.\n",i);
		}
		else{
			printf("%d is not a Prime Number.\n",i);
		}
		i++;
	}

	getch();
}
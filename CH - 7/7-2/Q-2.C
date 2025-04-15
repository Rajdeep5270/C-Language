#include<stdio.h>
#include<conio.h>

main() {
	int a, b, c, d;
	clrscr();

	printf("Enter First Value : ");
	scanf("%d",&a);

	printf("Enter Second Value : ");
	scanf("%d",&b);

	printf("Enter Third Value : ");
	scanf("%d",&c);

	printf("Enter Fourth Value : ");
	scanf("%d",&d);

	if(a == b && a == c && a == d && b == c && b == d && c == d) {
		clrscr();
		printf("All are Equal...");
	}
	else if(a == b || a == c || a == d || b == c || b == d || c == d) {
		clrscr();
		printf("Both are Same...");
	}
	else{
		if(a > b) {
			if(a > c) {
				if(a > d) {
					printf("%d is Maximum",a);
				}
				else{
					printf("%d is Maximum",d);
				}
			}
			else{
				if(c > d) {
					printf("%d is Maximum",c);
				}
				else{
					printf("%d is Maximum",d);
				}
			}
		}
		else{
			if(b > c) {
				if(b > d) {
					printf("%d is Maximum",b);
				}
				else{
					printf("%d is Maximum",d);
				}
			}
			else{
				if(c > d) {
					printf("%d is Maximum",c);
				}
				else{
					printf("%d is Maximum",d);
				}
			}
		}
	}

	getch();
}
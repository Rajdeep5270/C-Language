#include<stdio.h>
#include<conio.h>

main() {
	int a, b, c;
	clrscr();

	printf("Enter Three Values To Find Maximum : ");
	scanf("%d %d %d",&a,&b,&c);

	(a > b)
		?	(a > c)
				?	printf("%d is Maximum",a)
				:       printf("%d is Maximum",b)
		:	(b > c)
				?	printf("%d is Maximum",b)
				:	printf("%d is Maximum",c);

	getch();
}
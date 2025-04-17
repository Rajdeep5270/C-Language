#include<stdio.h>
#include<conio.h>

main() {
	int n;
	char grade;
	clrscr();

	printf("Enter Your Marks : ");
	scanf("%d",&n);

	(n > 100) ?	printf("Invalid Marks.")
		  :     (n >= 90)	?	grade = 'A'
					:       (n >= 80)	?	grade = 'B'
								:       (n >= 70)	?	grade = 'C'
											:       (n >= 60)	?	grade = 'D'
														:       (n >= 50)	?	grade = 'E'
																	:       (n >= 40)	?	grade = 'F'
																				:       printf("You Are Failed.");


	switch(grade) {
		case 'A':
		clrscr();
		printf("Your Grade = %c \n\nExcellent",grade);
		break;

		case 'B':
		clrscr();
		printf("Your Grade = %c \n\nWell Done",grade);
		break;

		case 'C':
		clrscr();
		printf("Your Grade = %c \n\nGood Job",grade);
		break;

		case 'D':
		clrscr();
		printf("Your Grade = %c \n\nPassed",grade);
		break;

		case 'E':
		clrscr();
		printf("Your Grade = %c \n\nJust Passed! But You Could Do Better.",grade);
		break;

		default:
		clrscr();
		printf("Invalid Grades.");
	}

	if(grade == 'A'  || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E') {
		printf("\n\nYou Are Eligible For Next Level.");
	}
	else{
		printf("\n\nYour Are Not Eligible.");
	}



	getch();
}                
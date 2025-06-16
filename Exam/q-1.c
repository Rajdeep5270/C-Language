#include<stdio.h>

void main() {
    int num;

    printf("Enter Number to get Factorial : ");
    scanf("%d",&num);

    int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
        // printf("%d * ",i);
    }
 
    printf("\n\n");

    printf("The Factorial of %d is %d", num, fact);
}
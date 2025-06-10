#include<stdio.h>

void main() {
    int a, b;
    printf("Enter First Value : ");
    scanf("%d",&a);

    printf("Enter Second Value : ");
    scanf("%d",&b);

    printf("\n\n");
    printf("First Value \t: %d \nSecond Value \t: %d",a,b);
    int *ptrA, *ptrB;

    ptrA = &a;
    ptrB = &b;

    *ptrA = *ptrA + *ptrB;
    *ptrB = *ptrA - *ptrB;
    *ptrA = *ptrA - *ptrB;

    printf("\n\nValue has been swapped using pointer\n\n");

    printf("First Value \t: %d \nSecond Value \t: %d",*ptrA,*ptrB);

}
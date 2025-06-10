#include <stdio.h>
#include "functions_of_swap.c"

void main() {
    int a, b;
    printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    swap(&a, &b);

    printf("First Number \t: %d\n",a);
    printf("Second Number \t: %d\n",b);
}
#include <stdio.h>

int swapPointer(int *x, int *y) {
    int c = *x;
    *x = *y;
    *y = c;
}

void main() {
    int a, b;

    printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    swapPointer(&a, &b);

    printf("First Number : %d\n",a);
    printf("Second Number : %d\n",b);
}
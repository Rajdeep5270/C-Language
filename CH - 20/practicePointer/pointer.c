#include<stdio.h>

void main() {
    int a = 10;

    int *ptr;

    ptr = &a;

    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    printf("%u\n",ptr);
    printf("%x\n",ptr);
}
#include <stdio.h>
#include "functions.c"

void main()
{
    int size;
    printf("Enter Number of Elements : ");
    scanf("%d", &size);

    int a[size];

    arrayInput(a, size);

}
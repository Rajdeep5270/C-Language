#include <stdio.h>
#include "E:\C LANGUAGE\ascendingDescendingFunction.c"

main() {

    printf("\n\nAscending Descending Array Program.\n\n");

    int size;
    printf("Enter Size of Array : ");
    scanf("%d",&size);

    int a[size];
    arrayInput(a, size);

    arrayOutput(a, size);

    ascendingOrder(a, size);

    descendingOrder(a, size);
}
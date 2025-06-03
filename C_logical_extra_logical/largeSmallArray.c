#include<stdio.h>
#include "E:\C LANGUAGE\functionsOfProgram\largeSmallFunction.c"
#include "E:\C LANGUAGE\ascendingDescendingFunction.c"
main() {
    int size;

    printf("Enter Size : ");
    scanf("%d",&size);

    int a[size];

    arrayInput(a, size);

    arrayOutput(a, size);

    largeSmall(a, size);
}
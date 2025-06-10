#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.c"

void main() {
    int size;

    size = inputOfSize(size);

    int a[size];
    // srand(time(0));

    userArrayInput(a , size);

    int *ptr;
    ptr = &a[0];

    for (int i = 0; i < size; i++)
    {
        int cap = 0;
        for (int j = 0; j < i; j++)
        {
            if (*(ptr + i) == *(ptr + j))
            {
                cap = 1;
            }
        }
        
        if (!cap)
        {
            printf("%d\t",*(ptr + i));
        }
    }
    
    
}
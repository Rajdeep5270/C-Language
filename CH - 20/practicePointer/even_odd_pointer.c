#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.c"

void main() {
    int size;

    size = inputOfSize(size);

    int a[size];
    srand(time(0));

    arrayInput(a, size);

    int *ptr;
    ptr = &a[0];

    int even = 0, odd = 0;
    printf("\n\nEven Numbers\n\n");
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            even++;
            printf("%d\t",*(ptr + i));
        }
        
    }

    printf("\n\nOdd Numbers :\n\n");
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) %2 != 0)
        {
            odd++;
            printf("%d\t",*(ptr + i));
        }
    }
    

    printf("\n\nTotal Odd And Even Numbers\n\n");
    printf("Even Numbers \t: %d\n",even);
    printf("Odd Numbers \t: %d\n",odd);
    
    
    
}
// In this program there is no user input i have created a program in which we only give size and from that size it automatic give random number from 0 to 99 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{

    int size;
    printf("Enter the Number of Elements : ");
    scanf("%d", &size);

    int a[size];
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 99; // this is only for testing purpose
    }

    printf("\n\nOutput of Array of Elements\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    

    int *ptr;
    int **ptrN;


    ptr = &a[0];
    ptrN = &ptr;

    // printf("\n\nOutput of Pointer Elements\n\n");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d\t",*(ptr + i));
    // }

    printf("\n\nReversed Array Elements\n\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\t",*(*ptrN + i) * *(*ptrN + i));
    }

}
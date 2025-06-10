#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int size;
    printf("Enter The Number of Elements : ");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 99;
    }
    
    printf("\n\nInput of Elements\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");
    
    int *ptr[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }

    int max = *ptr[0];
    int min = *ptr[0];

    for (int i = 0; i < size; i++)
    {
        if (*ptr[i] > max)
        {
            max = *ptr[i];
        }
        if (*ptr[i] < min)
        {
            min = *ptr[i];
        }
    }

    printf("Maximum\t: %d\nMinimum\t: %d",max,min);
}
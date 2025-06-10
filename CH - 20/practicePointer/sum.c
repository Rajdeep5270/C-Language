#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
    int size;
    printf("Enter the number of Elements : ");
    scanf("%d",&size);

    int a[size];
    srand(time(0));
    
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 99;
    }

    int *ptr;
    ptr = &a[0];

    printf("\n\nArray of Pointer\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",*(ptr + i));
    }
    

    int sum = 0;
    printf("\n\nSum of Array of Pointer\n\n");
    for (int i = 0; i < size; i++)
    {
        sum += ptr[i];
    }
    
    printf("Sum of Array of Pointer = %d",sum);
    
}
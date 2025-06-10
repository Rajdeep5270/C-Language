#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
    int size;
    printf("Enter the Number of Elements : ");
    scanf("%d",&size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 99;
    }

    printf("\n\nRandom Elements\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    int *ptr[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }

    printf("\n\nDescending Order of Random Array\n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*ptr[i] < *ptr[j])
            {
                int temp = *ptr[i];
                *ptr[i] = *ptr[j];
                *ptr[j] = temp;
            }
        }
        printf("%d\t",*ptr[i]);
    }
    
    
}
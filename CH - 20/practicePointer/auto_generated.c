#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
    int size;
    printf("Enter The Number of Elements : ");
    scanf("%d",&size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 99;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}
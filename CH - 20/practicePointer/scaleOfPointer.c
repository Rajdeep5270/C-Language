// Scale of pointer 

#include<stdio.h>

void main() {
    int size;
    printf("Enter the Number of Elements : ");
    scanf("%d",&size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter The Value of Elements of Array[%d] : ", i);
        scanf("%d",&a[i]);
    }
    
    int *ptr = a;

    for (int i = 0; i < size; i++)
    {
        printf("Address : %u, Value : %d\n",(ptr + i), *(ptr + i));
    }
    
}
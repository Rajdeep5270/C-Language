#include<stdio.h>

void main() {
    int size;
    printf("Enter the Number of Elements : ");
    scanf("%d",&size);

    int a[size];
    printf("\n\nInput of Array\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Elements of Array[%d] : ",i);
        scanf("%d",&a[i]);
    }

    int *ptr = a;
    printf("\n\nOutput of Scale of Pointer\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Square of %d is %u\n",a[i],*(ptr + i) * *(ptr + i));
    }
    
}
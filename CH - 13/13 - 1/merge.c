#include <stdio.h>

main()
{
    int a, b;

    printf("Enter The Size of Array A : ");
    scanf("%d", &a);

    printf("Enter The Size of Array B : ");
    scanf("%d", &b);

    int array1[a], array2[b];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the Values of Array A[%d] : ", i);
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < b; i++)
    {
        printf("Enter the Values of Array B[%d] : ", i);
        scanf("%d", &array2[i]);
    }

    int merge[a + b];
    for (int i = 0; i < a; i++)
    {
        merge[i] = array1[i];
    }

    for (int i = 0; i < b; i++)
    {
        merge[i + a] = array2[i];
    }

    for (int i = 0; i < a + b; i++)
    {
        printf("%d\t", merge[i]);
    }
}

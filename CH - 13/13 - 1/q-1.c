#include <stdio.h>

main()
{
    int n;

    printf("Enter Number of Elements : ");
    scanf("%d", &n);

    int a[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter Values in Elements %d : ", i);
        scanf("%d", &a[i]);
        count++;
    }

    printf("The Length of Array = %d", count);
}
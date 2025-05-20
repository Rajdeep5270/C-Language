#include <stdio.h>

main()
{

    int n;

    printf("Enter Number of Element : ");
    scanf("%d", &n);

    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter Value of Elements of Array %d : ", i);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("The Average : %.2f",(float)sum/n);
}
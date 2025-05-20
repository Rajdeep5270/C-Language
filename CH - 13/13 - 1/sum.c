#include <stdio.h>

main()
{
    int size;
    int n = 5;

    printf("Enter The Number of Elements : ");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter The Value of Elements A[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum = a[i] + a[j];
            if (sum == n)
            {
                printf("%d , %d\n", i, j);
            }
            
        }
        
    }
    
}
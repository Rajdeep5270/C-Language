#include <stdio.h>

main()
{
    int size;
    printf("Enter the number of Elements : ");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the values of Array[%d] : ",i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(a[i] == a[j]) {
                printf("%d\t",a[i]);
            }
        }
        
    }
    
}
// Dynamic Target Array 
#include<stdio.h>

main() {

    int target;
    printf("\n\nEnter The Target\n\n");
    printf("Enter The Target : ");
    scanf("%d",&target);

    int n;
    printf("\n\nEnter Elements\n\n");
    printf("Enter The Number of Elements : ");
    scanf("%d",&n);

    printf("\n\nEnter Values of Array\n\n");
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter The Values of Elements %d : ",i);
        scanf("%d",&array[i]);
    }

    int sum = 0;
    printf("\n\nOutput\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = array[i] + array[j];
            if(sum == target) {
                printf("[%d , %d]", i, j);
            }
        }
        printf("\n");
    }
    
}
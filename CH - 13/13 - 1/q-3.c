#include<stdio.h>

main() {
    int n;

    printf("Enter Number Of Elements of Array : ");
    scanf("%d", &n);

    printf("\n\n Enter Input of A \n\n");
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        printf("Enter Values of A[%d] : ",i);
        scanf("%d", &a[i]);
    }

    printf("\n\n Enter Input of B \n\n");
    for(int i = 0; i < n; i++) {
        printf("Enter Values of B[%d] : ",i);
        scanf("%d", &b[i]);
    }

    printf("\n\n Output of A and B \n\n");
    int c[n];
    for(int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
        printf("%d\t",c[i]);
    }
}
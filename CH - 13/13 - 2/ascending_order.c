#include<stdio.h>

main() {

    int size;
    printf("Enter Number of Elements : ");
    scanf("%d", &size);

    int a[size];
    for(int i = 0; i < size; i++) {
        printf("Enter Values of Elements A[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < size; i++) {

        for(int j = i+1; j < size; j++) {
            if(a[i] > a[j]) {
                int n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
        
    }

    printf("\n\n Ascending Order \n\n");
    for(int i = 0; i < size; i++) {
        printf("%d\t",a[i]);
    }
}
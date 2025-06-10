#include<stdio.h>

void main() {
    printf("%lu Bytes\n",sizeof(char));
    printf("%zu Bytes\n",sizeof(char));
    printf("%d Bytes\n",sizeof(int));
    printf("%zu Bytes\n",sizeof(long int));
    printf("%zu Bytes\n",sizeof(double));
    printf("%zu Bytes\n",sizeof(long long int));

    int a[100];
    printf("\n\n");
    printf("Array bites : %zu\n",sizeof a);
}
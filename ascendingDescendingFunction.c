void arrayInput(int a[], int size) {
    printf("\n\n Enter Elements of Array\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter Elements of Array[%d] : ",i);
        scanf("%d",&a[i]);
    }
}

void arrayOutput(int a[], int size) {
    printf("\n\nArray Output\n\n");
    for(int i = 0; i < size; i++) {
        printf("%d \t",a[i]);
    }
}

void ascendingOrder(int a[], int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(a[i] > a[j]) {
                int n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
    }
    
    printf("\n\nAscending Order\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    
}

void descendingOrder(int a[] , int size) {
    printf("\n\nDescending Order\n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] > a[i])
            {
                int n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
        printf("%d\t",a[i]);
        
    }
    
}
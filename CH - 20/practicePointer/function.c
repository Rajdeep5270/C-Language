int inputOfSize(int size) {
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    return size;
}

void arrayInput(int a[], int size) {
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 99;
    }
}

void userArrayInput(int a[] , int size) {
    for (int i = 0; i < size; i++)
    {
        printf("Enter The Elements of Array[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
}
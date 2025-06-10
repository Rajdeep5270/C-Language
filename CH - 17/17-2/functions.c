void sumArray(int a[], int size);

void arrayInput(int a[], int size) {
    printf("\n\nArray Input\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter Elements of Array[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    sumArray(a, size);
}

void sumArray(int a[], int size) {
    printf("\n\nSum of Arrays\n\n");
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    printf("Sum of Elements of Array = %d",sum);
    
}

// string length funciton 

void lengthCalculator(char name[]) {

    printf("Enter Your Name : ");
    gets(name);

    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            continue;
        }
        length++;
        
    }

    printf("The Length of %s is %d",name , length);

}
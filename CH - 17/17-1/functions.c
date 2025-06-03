// cube function 
int cube() {
    int cube;
    printf("Enter Number to find cube : ");
    scanf("%d",&cube);

    return cube * cube * cube;
}

// Number Check function 
void numberCheck() {
    int num;
    printf("Enter Any Number to Check if divisible by 3 & 5 : ");
    scanf("%d",&num);

    if(num % 3 == 0 && num % 5 == 0) {
        printf("%d is Divisible by 3 & 5.",num);
    }
    else{
        printf("%d is Not Divisible by 3 & 5.",num);
    }
}
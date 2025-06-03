void additionFunc(int num1, int num2) {
    printf("\nAddition of %d + %d = %d\n", num1, num2, num1 + num2);
}

void subtractFunc(int num1, int num2) {
    printf("\nSubtraction of %d - %d = %d\n", num1, num2, num1 - num2);
}

void multiplicationFunc(int num1, int num2) {
    printf("\nMultiplicaiton of %d * %d = %d\n", num1, num2, num1 * num2);
}

void divisionFunc(int num1, int num2) {
    printf("\nDivision of %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
}

void moduloFunc(int num1, int num2) {
    printf("\nModular of %d %% %d = %d\n", num1, num2, num1 % num2);
}

void enterNum(char ch) {
    int num1, num2;
    printf("\nEnter First Number : ");
    scanf(" %d", &num1);

    printf("Enter Second Number : ");
    scanf(" %d", &num2);

    if(ch == '+') {
        additionFunc(num1, num2);
    }
    else if(ch == '-') {
        subtractFunc(num1, num2);
    }
    else if(ch == '*') {
        multiplicationFunc(num1, num2);
    }
    else if(ch == '/') {
        divisionFunc(num1, num2);
    }
    else if(ch == '%') {
        moduloFunc(num1, num2);
    }
}



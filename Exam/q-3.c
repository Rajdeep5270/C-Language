#include <stdio.h>

void leapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
    {
        printf("%d is a Leap Year",year);
    }
    else{
        printf("Its Not a Leap Year");
    }
    
};

void main() {
    int year;

    printf("Enter Year : ");
    scanf("%d",&year);

    leapYear(year);
}
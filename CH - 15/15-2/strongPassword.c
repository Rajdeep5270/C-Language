#include<stdio.h>

void main() {

    char pass[20];
    printf("\n\nFirst Character Should be Capital, use digit, special Character to make it strong\n\n");
    printf("Enter Password : ");
    scanf("%[^\n]",&pass);

    int cap = 0 , digit = 0, spe = 0;
    if (pass[0] >= 'A' && pass[0] <= 'Z')
    {
        cap = 1;
    }
    for (int i = 0; pass[i] != '\0'; i++)
    {
        if((pass[i] >= '0' && pass[i] <= '9')) {
            digit = 1;
        }
        else if(pass[i] >= 32 && pass[i] <= 47 || pass[i] >= 58 && pass[i] <= 64 || pass[i] >= 91 && pass[i] <= 96 || pass[i] >= 123 && pass[i] <= 126) {
            spe = 1;
        }
    }

    if(cap && digit && spe) {
        printf("Your Password is Very Strong");
    }
    else{
        printf("Your Password is Not Strong.");
    }
    
    // printf("Your Password = %s",pass);

}
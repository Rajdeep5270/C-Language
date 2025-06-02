// TItile Case program 
#include <stdio.h>

main() {
    char name[50];
    int cap = 1;

    printf("Enter Your Name : ");
    scanf("%[^\n]", name);

    for (int i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            cap = 1;
        }
        else if(cap == 1 && name[i] >= 'a' && name[i] <= 'z') {
            name[i] -= 32;
            cap = 0;
        }
        else if(cap == 0 && name[i] >= 'A' && name[i] <= 'Z') {
            name[i] += 32;
        }
        else {
            cap = 0;
        }
    } 

    printf("Title Case String : %s\n", name);
}

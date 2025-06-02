#include<stdio.h>

main() {
    char name[50];

    printf("Enter Your Name Here : ");
    scanf("%[^\n]",&name);

    for (int i = 0; name[i] != NULL; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
        
    }
    printf("Your Toggle Case string : %s",name);
    
}
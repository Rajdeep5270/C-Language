#include <stdio.h>

main() {
    char name[50], camel[50];
    int cap = 0, j = 0;

    printf("Enter Your Name : ");
    scanf("%[^\n]", name);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            cap = 1;
        } else {
            if (cap == 1) {
                if (name[i] >= 'a' && name[i] <= 'z')
                {
                    camel[j++] = name[i] - 32;
                }
                else{
                    camel[j++] = name[i];
                }
                cap = 0;
            } else {
                camel[j++] = name[i];
            }
        }
    }
    
    camel[j] = '\0';

    printf("Camel Case String : %s\n", camel);
}

#include <stdio.h>

int main() {
    char password[100];
    int isUpper = 0;

    printf("Enter password: ");
    scanf("%s", password);

    for(int i = 0; password[i] != '\0'; i++) {
        if(password[i] >= 'A' && password[i] <= 'Z') {
            isUpper = 1;
            break;
        }
    }

    if(isUpper == 1)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}

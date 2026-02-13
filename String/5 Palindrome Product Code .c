#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int palindrome = 1;

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("Enter username: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("Length of string: %d", count);

    return 0;
}

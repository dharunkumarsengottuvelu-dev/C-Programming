#include <stdio.h>

int main() {
    char binary[65];
    int decimal = 0, base = 1, length;

    printf("Enter a number: ");
    scanf("%s", binary);

    
    for(length = 0; binary[length] != '\0'; length++);
    for(int i = length - 1; i >= 0; i--) {
        if(binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    printf("Decimal is: %d\n", decimal);

    return 0;
}   
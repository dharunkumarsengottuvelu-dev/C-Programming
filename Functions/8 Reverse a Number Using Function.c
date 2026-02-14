#include <stdio.h>

int reverse(int n) {
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main () {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int result = reverse(n);

    printf("Reversed number: %d", result);

    return 0;
}

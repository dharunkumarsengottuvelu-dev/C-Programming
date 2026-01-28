#include <stdio.h>

int main() {
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (temp = n; temp != 0; temp = temp / 10) {
        int digit = temp % 10;
        sum = sum + (digit * digit * digit);
    }
    if (sum == n)
        printf("Yes");
    else
        printf("No");

    return 0;
}

#include <stdio.h>

int sumOfN(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = sumOfN(n);
    printf("%d", result);

    return 0;
}

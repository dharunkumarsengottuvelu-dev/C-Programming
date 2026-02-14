#include <stdio.h>

int checkEvenOdd(int n) {
    if (n % 2 == 0) {
        printf("even");
    }else {
        printf("odd");
    }
}


int main() {
    int n;
    scanf("%d", &n);

    int num = checkEvenOdd (n);

    return 0;
}
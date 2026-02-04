#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int closest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] * arr[i] < closest * closest ||
           (arr[i] * arr[i] == closest * closest && arr[i] > closest)) {
            closest = arr[i];
           }
    }

    printf("%d", closest);
    return 0;
}

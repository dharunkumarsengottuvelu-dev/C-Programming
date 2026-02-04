#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], result[n];
    int index = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            result[index++] = arr[i];
        }
    }
    while (index < n) {
        result[index++] = 0;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}

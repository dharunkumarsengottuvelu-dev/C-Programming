#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        int flag = 1;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}

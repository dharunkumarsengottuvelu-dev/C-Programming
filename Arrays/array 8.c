#include <stdio.h>

int main() {
    int N, K;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);

    int temp[K];

    for (int i = 0; i < K; i++) {
        temp[i] = arr[i];
    }

    for (int i = K; i < N; i++) {
        arr[i - K] = arr[i];
    }

    for (int i = 0; i < K; i++) {
        arr[N - K + i] = temp[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

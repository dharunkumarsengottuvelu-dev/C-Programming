#include <stdio.h>

int main() {

    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxSum = 0;
    int maxIndex = 0;

    for (int j=0;j<c;j++) {

        int sum = 0;

        for (int i=0;i<r;i++) {
            sum = sum + arr[i][j];
        }

        if (j == 0 || sum > maxSum) {
            maxSum = sum;
            maxIndex = j;
        }
    }

    printf("%d", maxIndex);

    return 0;
}

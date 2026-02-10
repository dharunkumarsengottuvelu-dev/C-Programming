#include <stdio.h>

int main() {

    int r,c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int minSum = 0;
    int Index = -1;

    for (int i=0;i<r;i++) {
        int sum = 0;
        for (int j=0;j<c;j++){
            sum += arr[i][j];
        }

        if (sum != 0) {

            if (Index == -1 || sum < minSum) {
                minSum = sum;
                Index = i;
            }
        }
    }

    printf("%d", Index);

    return 0;
}

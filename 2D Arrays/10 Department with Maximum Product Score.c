#include <stdio.h>

int main() {

    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxProduct = 0;
    int maxIndex = 0;

    for(int i = 0; i < r; i++) {
        int product = 1;
        for(int j = 0; j < c; j++) {
            product = product * arr[i][j];
        }

        if(i == 0 || product > maxProduct) {
            maxProduct = product;
            maxIndex = i;
        }
    }

    printf("%d", maxIndex);

    return 0;
}

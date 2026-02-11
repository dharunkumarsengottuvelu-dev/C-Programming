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
    int sum = 0;
    for(int j = 0; j < c; j++) {
        sum += arr[0][j];
    }
    for(int j = 0; j < c; j++) {
        sum += arr[r-1][j];
    }
    for(int i = 1; i < r-1; i++) {
        sum += arr[i][0];
    }
    for(int i = 1; i < r-1; i++) {
        sum += arr[i][c-1];
    }
    printf("%d", sum);


    return 0;
}


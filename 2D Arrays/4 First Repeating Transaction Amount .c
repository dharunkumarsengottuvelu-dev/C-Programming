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

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {

            for(int l = 0; l < r; l++) {
                for(int m = 0; m < c; m++) {

                    if(i == l && j == m)
                        continue;

                    if(l > i || (l == i && m > j)) {
                        if(arr[i][j] == arr[l][m]) {
                            printf("%d", arr[i][j]);
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("No Repeating Element");

    return 0;
}

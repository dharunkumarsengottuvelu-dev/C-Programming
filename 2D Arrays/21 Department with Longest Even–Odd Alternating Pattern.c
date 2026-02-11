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

    int max = 0;
    int index = 0;

    for(int i = 0; i < r; i++) {

        int count = 1;

        for(int j = 0; j < c - 1; j++) {

            if(arr[i][j] % 2 != arr[i][j+1] % 2) {
                count++;
            }
            else {
                break;
            }
        }

        if(count > max) {
            max = count;
            index = i;
        }
    }

    printf("%d", index);

    return 0;
}

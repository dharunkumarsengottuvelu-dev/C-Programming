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

    for(int i=0; i<r-1;i++) {
        for(int j = 0;j<c-1;j++) {

            int sum=0;

            sum =arr[i][j];
            sum +=arr[i][j+1];
            sum +=arr[i+1][j];
            sum +=arr[i+1][j+1];

            if(sum>max) {
                max=sum;
            }
        }
    }

    printf("%d", max);

    return 0;
}

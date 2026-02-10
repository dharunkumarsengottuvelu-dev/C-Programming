#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d ",&r,&c);

    int arr[r][c];

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    int maxproduct=arr[0][0] * arr[1][0];

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {

            for (int k=i+1;k<2;k++) {
                for (int l=0;l<2;l++) {

                    int product = arr[i][j] * arr[k][l];
                    if (product > maxproduct) {
                        maxproduct = product;
                    }
                }
            }

        }
    }
    printf("%d",maxproduct);

}
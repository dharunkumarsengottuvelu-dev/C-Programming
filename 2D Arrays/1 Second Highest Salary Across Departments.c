#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int max1=0;
    int max2=0;

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (arr[i][j]>max1) {
                max2=max1;
                max1=arr[i][j];
            }else if (arr[i][j]<max1 && arr[i][j]>max2) {
                 max2=arr[i][j];
            }

        }
    }
    printf(" Second Highest Salary is : %d",max2);
}
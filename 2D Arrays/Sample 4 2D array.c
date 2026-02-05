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
    for (int i=0;i<r;i++) {
        int max=0;
        for (int j=0; j<c;j++) {
            if (arr[i][j]>max) {
                max=arr[i][j];
            }

        }if (max <= 90) {
            printf("There is No High Temp");
        }else {
            printf("%d is the Highest Temp in Row %d \n",max,i+1);
        }


    }
    return 0;

}
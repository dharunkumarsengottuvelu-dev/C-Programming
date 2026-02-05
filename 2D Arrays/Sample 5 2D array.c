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
    int count=0;

    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (arr[i][j]>200) {
                count++;
            }
        }
    }if (count > 200 ) {
        printf("There is No High Quality Image");
    }else {
        printf("%d ",count);


    }
}
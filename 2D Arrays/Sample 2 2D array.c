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

    int maxsum=0;
    int maxmonth=0;
    for (int i=0;i<r;i++) {
        int sum=0;
        for (int j=0;j<c;j++) {
            sum+=arr[i][j];
        }
        if (sum>maxsum) {
           maxsum=sum;
            maxmonth=i;
        }
    }
    printf("Highest Sale in Month : %d \n",maxmonth+1);
    return 0;
}
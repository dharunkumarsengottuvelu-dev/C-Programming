#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n) ;


    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count=0;
    int min =-1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (min == -1 || arr[i] < min) {
                min = arr[i];
            }
        }

    }
    if (min == -1) {
        printf("No Positive");
    }else {
        printf("%d",min);
    }
    return 0;
}

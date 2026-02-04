#include <stdio.h>
int main() {
    int n;
    int sum=0,avg;
    int count=0;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    avg = sum/n;
    for (int i = 0; i < n; i++) {
        if (arr[i] < avg) {
            count++;
        }
    }

    printf("%d", count);
    return 0;

    }




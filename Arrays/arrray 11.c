#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];

    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    int rsum =0,lsum=0;
    for (int i=0; i<size; i++) {
        rsum += arr[i];
    }
    for (int i=0; i<size; i++) {
        lsum += arr[i];
    }
    int temp=0;
   if (lsum==rsum) {
        temp =size/2;
    }else {
        temp=-1;
    }
    printf("%d", temp);
 return 0;
}

#include <stdio.h>

int distinct(int size, int arr[]) {
    int count = 0;

    for(int i = 0; i < size; i++) {
        int found = 0;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int total = distinct(size, arr);
    printf("%d", total);

    return 0;
}

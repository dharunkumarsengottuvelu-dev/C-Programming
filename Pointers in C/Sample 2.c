#include <stdio.h>

void even(int arr[],int n) {
    int *p=arr;
    for (int i=0;i<n;i++) {
        if (i%2==0) {
            *p=(*p)*2;
        }
    }
    printf("Final array: ");
    for (int i=0;i<n;i++) {
        printf("%d \n",*(p+i));
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    even(arr,n);

    return 0;


}
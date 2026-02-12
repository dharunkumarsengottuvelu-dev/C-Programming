#include <stdio.h>

void sum(int arr[],int n) {
    int *p=arr;
    int sum=0;
    for (int i=0;i<n;i++) {
        if (*(p+i)>50) {
            break;
        }
        sum+=*(p+i);
    }
    printf("Sum of array: %d\n",sum);
}


int main () {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    sum(arr,n);

}
#include <stdio.h>
int main() {
    int size;
    printf("Enter the Number :");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size-1;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=0 ,sum2=0;
    for (int i=0;i<size-1;i++) {
        sum += arr[i];
    }
    for (int i=1;i<=size;i++) {
        sum2+=i;
    }
    int miss=sum2-sum;
    printf("%d",miss);
}
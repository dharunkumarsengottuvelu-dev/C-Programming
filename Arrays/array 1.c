#include <stdio.h>
int main() {
    int size;
    printf("Enter the number :");
    scanf("%d",&size);
    int arr[size];

    for( int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    int max =arr[0];
    int max2=arr[0];

    for (int j=1;j<size;j++) {
        if (arr[j]>max) {
            max2=max;
            max=arr[j];
        }else if (arr[j]<max && arr[j]>max2) {
            max2=arr[j];
        }

    }
    printf("the First Largest is %d and Second Largest is %d ",max,max2);

return 0;

}
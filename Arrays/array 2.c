#include <stdio.h>
int main() {
    int size;
    printf("Enter the Number :");
    scanf("%d",&size);
    int x;
    printf("Enter the X :");
    scanf("%d",&x);

    int arr[size];


    int i,j;

    for (i=0;i<size;i++) {

        scanf("%d",&arr[i]);
    }
    int count=0;
    for (j=0;j<size;j++) {
        if (x==arr[j]) {
            count++;
        }

    }
    printf("Frequency count is %d ",count);
    return 0;


}
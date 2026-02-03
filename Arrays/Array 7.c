#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    int evencount=0,oddcount=0;

    int i;
    for (i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<size;i++) {
        if (arr[i]%2==0) {
            evencount++;
        } else {
            oddcount++;
        }
    }
    printf(" Even :%d \n Odd :%d",evencount,oddcount);

}
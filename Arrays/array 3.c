#include <stdio.h>
int main() {
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    int sales;
    printf("Enter the Sales :");
    scanf("%d",&sales);

    int arr[n];
    int flag=0;

    for (int i=1;i<n;i++) {
        scanf("%d",&arr[i]);
        if (arr[i]>sales) {
            sales=arr[i];
        }else {
            flag=1;
        }
    }if (flag==1) {
        printf("No");
    }else {
        printf("Yes");
    }

}
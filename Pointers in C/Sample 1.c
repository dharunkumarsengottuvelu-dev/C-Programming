#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the Elements\n");

    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int index;
    printf("Enter the index\n");
    scanf("%d",&index);

    int *p=arr;

    for (int i=index;i<n;i++) {
        printf("%d ",*(p+i));
    }

}
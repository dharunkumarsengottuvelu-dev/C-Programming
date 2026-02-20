#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int *i=arr;
    int *j=arr+size-1;
    while (i<j)
    {
        int temp=*i;
        *i=*j;
        *j=temp;
        i++;
        j--;
    }
    for(int i=0; i<size;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}
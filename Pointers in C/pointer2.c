#include<stdio.h>
int max(int *n,int *arr){
    int maxi =*arr;
    int *p=arr;
    for(int i=0;i<*n;i++){
        if(maxi<*(p+i)){
            maxi=*(p+i);
        }
    }
    return maxi;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a= max(&n,arr);
    printf("%d",a);
    return 0;   
}
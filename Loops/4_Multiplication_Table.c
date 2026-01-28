#include <stdio.h>
int main(){
    int n, mul=0;
    printf("Enter the Number : ");  

    scanf("%d",&n);
    for (int i=1; i<=10; i++){
        mul =n*i;
        printf("%d ",mul);
    }
}
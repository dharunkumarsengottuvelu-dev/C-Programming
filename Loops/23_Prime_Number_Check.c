#include<stdio.h>
int main(){
    int a ,prime=1;
    printf("Enter a number :");
    scanf("%d",&a);
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            prime=0;
            break;
        }
    }

    if(prime && a>1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

}
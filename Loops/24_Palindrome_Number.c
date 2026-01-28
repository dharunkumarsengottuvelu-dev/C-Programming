#include<stdio.h>
int main(){
    int a , rev=0;
    printf("Enter a number :");
    scanf("%d",&a);

    for(int i=a; i!=0; i=i/10){
        int digit = i % 10;
        rev = rev * 10 + digit;
    }

    if(rev == a){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}
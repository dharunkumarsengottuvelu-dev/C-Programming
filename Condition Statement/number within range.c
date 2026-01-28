#include <stdio.h>
int main() {
    int n1;
    scanf("%d",&n1);
    if(n1>=10 && n1<=20 ){
        printf("Number is within range");
    }
    else{
        printf("Number is not within range");
    }
    return 0;
}
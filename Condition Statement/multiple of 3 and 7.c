#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num % 3 == 0 && num % 7 == 0){
        printf("Multiple of both 3 and 7");
    }
    else{
        printf("It is not multiple of 3 and 7");
    }
    return 0;
}
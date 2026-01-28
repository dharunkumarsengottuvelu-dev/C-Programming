#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if(c>='0' && c<='9'){
        printf("Digit");
    }
    else{
        printf("not a digit");
    }
    return 0;
}
#include <stdio.h>
int main() {
    int a=7;
    int b=3;
    int c=7;
    int d=3;
    printf("%d ",a/=b);
    printf("%d",c%=d);
    return 0;
}
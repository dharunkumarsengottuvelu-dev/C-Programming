#include <stdio.h>
int main() {
    int units,tb;
    scanf("%d",&units);
    if(units>0){
        tb = units*5;
        printf("Bill amount = Rs.%d",tb);
    }
    else{
        printf("Invalid units");
    }
    return 0;
}
#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%4==0){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}
#include<stdio.h>
int main(){

     int mode;
    scanf("%d",&mode);

    switch (mode)
    {
    case 1:
        printf("40");
        break;

    case 2:
        printf("120");
        break;
    case 3:
        printf("0");
        break;
    default:
        printf("invalid input");
        break;
    }

    return 0;

}
#include<stdio.h>
int main(){

     int type;
    scanf("%d",&type);

    switch (type)
    {
    case 1:
        printf("speed40 mbps");
        break;

    case 2:
        printf("speed 100 mbps");
        break;
    case 3:
        printf("speed 300 mbps");
        break;
    default:
        printf("invalid input");
        break;
    }

    return 0;

}
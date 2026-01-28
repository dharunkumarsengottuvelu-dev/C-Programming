#include<stdio.h>
int main(){

     int type;
    scanf("%d",&type);

    switch (type)
    {
    case 1:
        printf("80000");
        break;

    case 2:
        printf("60000");
        break;
    case 3:
        printf("450000");
        break;
    default:
        printf("invalid input");
        break;
    }

    return 0;

}
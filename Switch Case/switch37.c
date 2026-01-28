#include<stdio.h>
int main(){

     int type;
    scanf("%d",&type);

    switch (type)
    {
    case 1:
        printf("Certificate fee 0");
        break;

    case 2:
        printf("Certificate fee 500");
        break;
    default:
        printf("invalid input");
        break;
    }

    return 0;

}
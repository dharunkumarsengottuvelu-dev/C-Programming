#include<stdio.h>
int main(){

     int type;
    scanf("%d",&type);

    switch (type)
    {
    case 1:
        printf("Consultation fee 500");
        break;

    case 2:
        printf("Consultation fee 1200");
        break;
    default:
        printf("invalid input");
        break;
    }

    return 0;

}
#include<stdio.h>
int main(){
    int wtype;
    scanf("%d",&wtype);

    switch (wtype)
    {
    case 1:
        printf("Under Warranty");
        break;
    case 2:
       printf("Limited Warranty");
       break;
    case 3:
       printf("out of warranty");
       break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}
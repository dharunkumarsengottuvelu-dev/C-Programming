#include<stdio.h>
int main(){
    int type,flat;
    scanf("%d",&type);

    int late;
    scanf("%d",&late);

    switch (type)
    {
    case 1:
       flat=late*2;
       printf("%d",flat);
        break;

    case 2:
       flat=late*5;
       printf("%d",flat);
        break;

    default:
        printf("invalid input");
        break;
    }
}

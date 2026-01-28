#include<stdio.h>
int main(){

    int type,a;
    scanf("%d",&type);

    int quantify;
    scanf("%d",&quantify);

    switch (type)
    {
    case 1:
            a=quantify*105;
            printf("%d",a);
       break;
    case 2:
            a=quantify*92;
            printf("%d",a);
       break;
    case 3:
            a=quantify*85;
            printf("%d",a);
    default:
        printf("invalid input");
        break;
    }
}

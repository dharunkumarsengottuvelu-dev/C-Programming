#include<stdio.h>
int main(){
    int type,flat,dis;
    scanf("%d",&type);

    int amount;
    scanf("%d",&amount);

    switch (type)
    {
    case 1:
        dis=amount*0.05;
        flat = amount-dis;
        printf("%d",flat);
        break;

    case 2:
        dis=amount*0.15;
        flat = amount-dis;
        printf("%d",flat);
        break;
    default:
        printf("invalid input");
        break;
    }
}

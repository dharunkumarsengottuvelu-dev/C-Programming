#include<stdio.h>
int main(){
    int type,flat,dis;
    scanf("%d",&type);

    int min;
    scanf("%d",&min);

    switch (type)
    {
    case 1:
        dis=min*1;
        printf("%d",dis);
        break;

    case 2:
        dis=min*3;
        printf("%d",dis);
        break;
    case 3:
        dis=min*10;
        printf("%d",dis);
        break;
    default:
        printf("invalid input");
        break;
    }
}

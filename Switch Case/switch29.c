#include<stdio.h>
int main(){

     int type,dis;
    scanf("%d",&type);

    int distance;
    scanf("%d",&distance);

    switch (type){
        case 1:
            dis=distance*10;
            printf("%d",dis);
            break;

    case 2:
            dis=distance*15;
            printf("%d",dis);
            break;
    case 3:
            dis=distance*20;
            printf("%d",dis);
            break;
    default:
        printf("invalid input");
        break;
    }

    return 0;

}
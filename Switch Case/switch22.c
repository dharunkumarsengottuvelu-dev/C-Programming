#include<stdio.h>
int main(){
    int type,flat;
    scanf("%d",&type);

    int unit;
    scanf("%d",&unit);

    switch (type)
    {
    case 1:
        if(unit<=30){
        int aa=unit*5;
        printf("%d",aa);
        }
        else {
           int  bi=((30*5)+(unit-30)*8);
           printf("Bill %d",bi);
        }
        break;

    case 2:
         flat=unit*10;
        printf("%d",flat);
        break;
    default:
        printf("invalid input");
        break;
    }
}

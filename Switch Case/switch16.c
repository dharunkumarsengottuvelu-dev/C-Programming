#include<stdio.h>
int main(){
    int class,cal,charge;
    scanf("%d",&class);

    int weight;
    scanf("%d",&weight);

    switch (class)
    {
    case 1:
        charge =weight*300;
        printf("Extra Baggage Charge %d",charge);
        break;

    case 2:
        if(weight==3){
            printf("Free");
        }else{
            cal=((weight-3)*300);
            printf(" Extra Baggage Charge %d",cal); 
        }
        break;
    default:
        printf("invalid input");
        break;
    }
}

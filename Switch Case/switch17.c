#include<stdio.h>
int main(){
    int vechicletype,perhour;
    scanf("%d",&vechicletype);

    int hours;
    scanf("%d",&hours);
    
    switch (vechicletype)
    {
    case 1:
        perhour= hours*10;
        printf("Parking fee %d",perhour);
        break;
    
    case 2:
         perhour= hours*20;
        printf("Parking fee %d",perhour);
        break;
    case 3:
        perhour =hours*1;
        printf("Parking fee %d",perhour);
    default:
        printf("invalid input");
        break;
    }

}
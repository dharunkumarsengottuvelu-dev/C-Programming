#include<stdio.h>
int main(){

    int duration;
    scanf("%d",&duration);

    switch (duration)
    {
    case 1:
    
         printf("Membership 1500");
       break;
    case 2:
       printf("Membership 4000");
       break;
    case 3:
       printf("Membership 7000");
    default:
        printf("invalid input");
        break;
    }
}

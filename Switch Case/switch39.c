#include<stdio.h>
int main(){
    int dtype;
    scanf("%d",&dtype);

    int distance;
    scanf("%d",&distance);

    switch (dtype)
    {
    case 1:
       if(distance<=5){
        printf("Transport fee 800");
       }else{
        printf("No");
       }
        break;
    case 2:
       if (distance >=6 && distance<=10){
            printf("Transport fee 1200");
       }else{
        printf("No");
       }
       break;
    case 3:
       if (distance >=11){
            printf("Transport fee 1800");
       }else{
        printf("No");
       }
       
    default:
        printf("invalid input");
        break;
    }
    return 0;
}
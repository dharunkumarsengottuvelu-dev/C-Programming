#include<stdio.h>
int main(){
    int d;
    scanf("%d",&d);

    int hours;
    scanf("%d",&hours);

   
    switch (d)
    {
    case 1:
         if (hours<=1){
            printf("Short interruption");
        }else{
            printf("no");
        }
         
        break;
    case 2:
        if(hours<=4){
            printf("Medium interruption");
        }else{
            printf("no");
        }
         
        break;
    case 3:
        if(hours>=4){
            printf("Long interruption");
        }else{
            printf("no");
        }
        break;
    default:
        break;
    }
}
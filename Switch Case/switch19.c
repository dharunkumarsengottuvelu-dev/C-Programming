#include<stdio.h>
int main(){
    int category;
    scanf("%d",&category);

    int distance;
    scanf("%dkm",&distance);

    switch (category)
    {
    case 1:
       if(distance<=30){
        printf("Eligible");
       }else{
        printf("Eligible with Extra fees");
       }
        break;
      
    case 2:
        if(distance<=30){
        printf("Eligible");
       }else{
        printf("Not eligible");
       }
        break;
    case 3:
       if(distance==30){
        printf("Eligible");
       }
    default:
        printf("invalid input");
        break;
    }

}
#include<stdio.h>
int main(){
    int role;
    scanf("%d",&role);

    int time;
    scanf("%d",&time);

    switch (role)
    {
    
    case 1:
        if(time>=1.00 && time<=24.00){
            printf("Full access");
        }
        break;
    case 2:
        if(time>=9.00 && time<=20.00){
            printf("Limited Access");
        }else{
            printf("Access Denied");
        }
        break;
    default:
        break;
    }
}
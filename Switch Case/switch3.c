#include<stdio.h>
int main(){

    int account_type;
    scanf("%d",&account_type);
    
    int balance;
    scanf("%d",&balance);

    int withdraw_amunt;
    scanf("%d",&withdraw_amunt);

    switch (account_type)
    {
    case 1:
        if(balance>=withdraw_amunt){
            printf("Transaction Successful");
        }else{
            printf("Transaction Declined");
        }
        break;
    case 2:
        if(withdraw_amunt<=5000){
            printf("withdraw succeed");
        }else{
            printf("Limit Exceeded");
        }
    default:
        break;
    }
}
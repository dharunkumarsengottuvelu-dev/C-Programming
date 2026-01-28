#include<stdio.h>
int main(){
    int seat,silver;
    scanf("%d",&seat);
    int time;
    scanf("%d",time);
    switch (seat)
    {
    case 1:
        if(time>= 1.00 && time <=6.00){
            printf("Ticket price 150");
        }else if(time >=6.00){
            silver=150;
            printf("Ticket price %d",silver+50);
        }
        break;
    case 2:
         if(time>= 1.00 && time <=6.00){
            printf("Ticket price 150");
        }else if(time >=6.00){
             int gold=250;
            printf("Ticket price %d",gold+50);
        }
    default:
        break;
    }
    return 0;
}
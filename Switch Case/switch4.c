#include<stdio.h>
int main(){
    int class;
    scanf("%d",&class);

    int age;
    scanf("%d",&age);

    switch (class)
    {
    case 1:
        if(age<=12){
            int dis=300*0.50;
            int discount = 300-dis;
            printf("Fare %d",discount);
        }else if(age>=60){
            int dis=300*0.33;
            int discount = 300-dis;
            printf("Fare %d",discount);
        }
        else{

            printf("Fare 300");
        }
        break;
    case 2:
        if(age<=12){
            int dis=1000*0.50;
            int discount = 1000-dis;
            printf("Fare %d",discount);
        }else if(age>=60){
            int dis=1000*0.33;
            int discount = 1000-dis;
            printf("Fare %d",discount);
        }
        else{

            printf("Fare 1000");
        }
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}

#include<stdio.h>
int main(){
    int attempt;
    scanf("%d",&attempt);

    int mark;
    scanf("%d",&mark);
    switch (attempt)
    {
    case 1:
        if(mark>=80){
            printf("Excellent");
        }else{
            printf("Not Qualifed");
        }
        break;
    case 2:
        if(mark>=60){
            printf("Good");
        }else{
            printf("Not Qualifed");
        }
    case 3:
        if(mark<=40){
            printf("Need Improvement");
        }
        
    default:
        break;
    }
}
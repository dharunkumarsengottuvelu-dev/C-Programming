#include<stdio.h>
int main(){
   int type,a;
   scanf("%d",type);

   int days;
   scanf("%d",&days);

    switch (type)
    {
    case 1:
       if(days<=5){
            a=days*50;
            printf("%d",a);
            break;
       }else{
        printf("no");
       }
       break;
    case 2:
       if( days>=6 && days<=10){
            a=days*100;
            printf("%d",a);
       }else{
        printf("no");
       }
       break;
    case 3:
       if(days>10){
            a=days*200;
            printf("%d",a);
       }else{
        printf("no");
       }
       break;
    default:
        printf("invalid input");
        break;
    }
}

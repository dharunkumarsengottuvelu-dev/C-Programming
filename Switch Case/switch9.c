#include<stdio.h>
int main(){
    
    
    int roomtype;
    scanf("%d",&roomtype);

    char ch;
    scanf(" %c",&ch);

    switch (roomtype)
    {
    case 1:
       if(ch=='A'||ch=='a'){
         printf("2500");
         break;
       }else if(ch=='B'|| ch=='b'){
        printf("2000");
        break;
       }
        break;
    case 2:
       if(ch=='C'|| ch=='c'){
        printf(" 4000");
        break;
       }else if(ch =='D'||ch=='d'){
        printf("3000");
        break;
       }
    default:
        printf("invalid input");
        break;
    }

}
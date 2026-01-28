#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);

    char ch;
    scanf(" %c",&ch);
    switch (type)
    {
    case 1:
        if(ch=='R'|| ch=='r'){
            printf("5000");
        }else if(ch=='s'|| ch=='S'){
            printf("3000");
        }
        break;
    
    case 2:
        if(ch=='R'|| ch=='r'){
            printf("9000");
        }else if(ch=='s'|| ch=='S'){
            printf("7000");
        }
        break;
    
    default:
        printf("Invalid input");
        break;
    }
}
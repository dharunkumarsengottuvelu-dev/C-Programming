#include<stdio.h>
int main(){

    int traffic;
    scanf("%d",&traffic);

    switch (traffic)
    {
    case 1:
    
        printf("Fine 1000");
        break;
    case 2:
       printf("fine 1500");
       break;
    case 3:
       printf("fine 2000");
       break;
    default:
        printf("invalid input");
        break;
    }
}

#include <stdio.h>
int main() {
    int choice,x,y;
    scanf("%d%d%d",&choice,&x,&y);
    switch(choice){
        case 1:
        printf("sum = %d",x+y);
        break;
        default:
        printf("Invalid choice");
    }

    return 0;
}
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Select an option\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
        int sum = a+b;
        printf("Addition value is: %d\n",sum);
        break;
        case 2:
        int diff = a-b;
        printf("Subtraction value is: %d\n",diff);
        break;
        case 3:
        int mul = a*b;
        printf("Multiplication value is: %d\n",mul);
        break;
        case 4:
        int div = a/b;
        printf("Division value is: %d\n",div);
        break;
        default:
        printf("Invalid option");
        
        
    }
    return 0;
}
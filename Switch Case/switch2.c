#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int div = a/10;
    switch (div)
    {
    case 2:
        printf("Grade Fail");
        break;
    case 3:
        printf("Grade Supplementay");
        break;
    case 4:
        printf("Grade F");
        break;
    case 5:
        printf("Grade E");
        break;
    case 6:
        printf("Grade D");
        break;
    case 7:
        printf("Grade C");
        break;
    case 8:
        printf("Grade B");
        break;
    case 9:
        printf("Grade A");
        break;

    default:
        break;
    }
    return 0;
}
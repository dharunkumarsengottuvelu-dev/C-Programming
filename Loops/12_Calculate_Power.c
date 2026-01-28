#include<stdio.h>
int main(){
    int base, p;
    printf("Enter the number : ");
    scanf("%d %d",&base,&p);

    int result = 1;
    for (int i=0; i<p; i++){
        result = result * base;
    }
    printf ("Result: %d\n", result);
    
    return 0;
}
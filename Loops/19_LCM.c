#include<stdio.h>
int main(){
    int a, b, lcm;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    int max = (a > b) ? a : b;

    for(int i = max; ; i++){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    printf("LCM is %d", lcm);    

    return 0;
}
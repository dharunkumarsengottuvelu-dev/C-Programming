#include<stdio.h>
int main(){
    int n, m, sum = 0;
    printf("Enter two Numbers: ");
    scanf("%d %d",&n,&m);

    for ( int i=1; i<=m; i++){
        if (i % n == 0){
            sum = sum + i;
        }
    }

    printf("Sum of Multiples is : %d",sum);
    return 0;
}
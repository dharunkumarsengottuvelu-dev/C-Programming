#include<stdio.h>
int main(){
    int n, fact=0, temp;
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i=n; i>0; i=i/10){
        temp = i % 10;
        int f =1;
        for(int j=1; j<=temp; j++){
            f = f * j;
        }
        fact = fact + f;    

    }
    if (fact==n)
        printf("Yes");
    else
        printf("No");

}
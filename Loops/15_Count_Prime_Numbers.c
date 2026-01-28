#include<stdio.h>
int main(){
    int n, count=0,prime;
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i=2; i<=n; i++){
        prime = 1; 
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                prime = 0; 
                break;
            }
        }
        if(prime==1){
            count++;
        }
    }

    printf("The prime Number is : %d",count );
    return 0;

}
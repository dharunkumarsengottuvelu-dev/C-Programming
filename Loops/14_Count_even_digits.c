#include<stdio.h>
int main(){
    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d",&n);\

    if (n==0){
        count = 1;
    }else{
        
        for (;n!=0; n=n/10){
            if(n%2==0){
                count++;
            }
        }
        printf("Even Count is : %d",count);
    }
    return 0;   
}
       


#include<stdio.h>
int main(){
    int d,n1=0, n2=1 , m;
    printf("Enter the Number : ");
    scanf("%d",&d);
    if(d<=0){
        printf("Invalid Input");
    }

    for (int i=0; i<d; i++){
        printf("%d ",n1);
        m=n1+n2;
        n1=n2;
        n2=m;

        }
        return 0;


     
    }
    

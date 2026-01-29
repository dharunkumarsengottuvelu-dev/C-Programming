#include<stdio.h>
int main(){
    int i,j,m;
    for (i=1;i<=4;i++){
        for (j=1;j<=i;j++){
            printf("%d",j);
        }
    for(m=1;m<=4-i;m++){
        printf("  ");
    }
    for(int g=i;g>=1;g--){
        printf("%d",g);
        }
        printf("\n"); 

    }
    return 0;

}
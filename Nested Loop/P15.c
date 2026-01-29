#include<stdio.h>
int main(){
    int i,j;
    for (i=5;i>=1;i--){
        for(j=1;j<i+1;j++){
            printf(" %c ",j+64);
           

        }
        printf("\n");
    }
}
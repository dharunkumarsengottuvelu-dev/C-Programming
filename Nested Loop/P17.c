#include<stdio.h>
int main(){
    int i,j,k;
    for (i=1;i<=4;i++){
        for (k=1;k<=4-i;k++){
            printf(" ");
        }
   for (j=1;j<=i;j++){
            printf("%c",j+64);
        }
    for (int d=i-1;d>=1;d--){
        printf("%c",d+64);
    }
        printf("\n");
    }
return 0;
}
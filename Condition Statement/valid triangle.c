#include <stdio.h>
int main() {
    int n1,n2,n3,sum;
    scanf("%d%d%d",&n1,&n2,&n3);
    sum = n1+n2+n3;
    if(sum==180){
        printf("Valid triangle");
    }
    else{
        printf("Not a valid triangle");
    }
    return 0;
}
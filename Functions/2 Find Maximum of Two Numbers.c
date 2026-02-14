#include <stdio.h>


int largest(int a,int b) {
    if (a>b) {
        return a;
    }else {
        return b;
    }
}

int main() {
    int A ,B;
    scanf("%d %d",&A,&B);

    int result = largest(A,B);

    printf("%d",result);

    return 0;
}
#include <stdio.h>
int main() {
    char n1,n2,small;
    scanf("%d%d",&n1,&n2);
    small = (n1>n2) ? n1 : n2;
    printf("%d is smallest",small);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
    char s[50];
    fgets(s,sizeof(s), stdin);
    printf("Enter search letter:");
    char c[10];
    fgets(c, 10,stdin);

    int i;
    int len = strlen(s);
    int count = 0;

    for (i=0;i<len;i++) {
        if (s[i]==c[0]) {

            printf("%d",i);
            break;
        }else {
            printf("-1");
            break;
        }

    }
}


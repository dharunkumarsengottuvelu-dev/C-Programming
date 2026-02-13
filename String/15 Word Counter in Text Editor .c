#include <stdio.h>
#include <string.h>
int main() {
    char s[50];
    fgets(s, 50, stdin);

    int i;
    int len = strlen(s);
    int count = 1;
    for (i=0;i<len;i++) {
        if (s[i]==' ') {
            count++;
        }
    }
    printf("%d",count);

}
#include <stdio.h>
#include <string.h>
int main() {
    char s[50];
    fgets(s, 50, stdin);
    char s1[50];

    int i;
    int len = strlen(s);
    for (i=0;i<len;i++) {
        s1[i] = s[i];
        printf("%c",s1[i]);
    }

}
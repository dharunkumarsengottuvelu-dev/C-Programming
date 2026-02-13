#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s,100, stdin);

    int count=0,i;

    int str_len=strlen(s);
    for (i=0; i<str_len; i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    printf("Space Count is:  %d", count);
}

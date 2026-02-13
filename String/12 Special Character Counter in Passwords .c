#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    fgets(s, 100, stdin);

    int i;
    int len = strlen(s);
    int count=0;

    for (i=0;i<len;i++) {
        if (s[i]>=35 && s[i]<=64) {
            if (s[i] >= '1' && s[i] <= '9') {
                continue;
            }
            count++;
        }
    }
    printf("%d", count);
}
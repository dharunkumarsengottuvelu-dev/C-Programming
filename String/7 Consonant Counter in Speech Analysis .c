#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    fgets(s, 100, stdin);

    int count = 0, i, len = strlen(s)-1;

    for (int i=0; i < len; i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
            s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {

            continue;
        }else {
            count++;
        }
    }
    printf("%d", count);
}

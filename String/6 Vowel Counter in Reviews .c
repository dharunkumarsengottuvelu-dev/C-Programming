#include <stdio.h>
int main() {
    char s[100];

    fgets(s, 100, stdin);

    int i=0;
    int count=0;

    while (s[i] != '\0') {

        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
        s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
            count++;
        }
        i++;
    }
    printf("%d", count);
}
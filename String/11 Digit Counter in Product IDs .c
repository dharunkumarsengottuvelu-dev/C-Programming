#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);


    int len=strlen(s);
    int count=0;

    for (int i=0; i<len-1; i++) {
        if (s[i]>='a' && s[i]<='z'|| s[i]>='A' && s[i]<='Z'|| s[i]==' ') {
            continue;
        }else {
            count++;
        }

    }
    printf("%d", count);
}

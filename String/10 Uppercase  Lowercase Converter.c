#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);

    int i=0;
    int len=strlen(s);
    int res;
    for (i=0; i<len; i++) {
        if (s[i]==32){
            printf("%c", s[i]);
        }else {
            if (s[i]>='A' && s[i]<='Z') {
                res=s[i]+32;
            }
            printf("%c", res);
        }
    }

}
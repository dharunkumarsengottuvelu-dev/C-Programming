#include <stdio.h>


int main() {
    char str[100];
    fgets(str,100,stdin);
    char *p=str;

    int index=0;
    while(*p!='\0') {
        if (index%2==1) {
            *p='*';
        }
        p++;
        index++;
    }

    printf("%s",str);

    return 0;



}
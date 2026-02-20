#include<stdio.h>

int main(){
    char str1[100], str2[50];
    scanf("%s", str1);
    scanf("%s", str2);
    char *p = str1;
    
    while(*p){
        p++;
    }
    char *q = str2;

    while(*q){
        *p = *q;
        p++;
        q++;
    }

    *p = '\0';   

    printf("%s", str1);

    return 0;
}

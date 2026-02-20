#include<stdio.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=0;
    char *p=str;
    while (*p!='\0')
    {
        if(*p =='a' || *p=='e' || *p =='i' || *p=='o' || *p=='u'||
            *p =='A' || *p=='E' || *p =='I' || *p=='O' || *p =='U'
        ){
            count++;
        }
        p++;
    }
    
    printf("%d",count);

    return 0;
}
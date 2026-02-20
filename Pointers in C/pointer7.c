#include<stdio.h>

int main(){
    char str[100];
    scanf("%s", str);
    char *start = str;
    char *end = str;
    while(*end != '\0'){
        end++;
    }
    end--;   
    int isPalindrome = 1;
    while(start < end){
        if(*start != *end){
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome){
         printf("YES");
    }
    else{
         printf("NO");
    }

    return 0;
}

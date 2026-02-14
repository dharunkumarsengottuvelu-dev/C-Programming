#include <stdio.h>

int palindrome(int n) {
    int o=n;
    int rev=0;

    while (n>0) {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if (o==rev)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if (palindrome(n)) {
        printf("Palindrome");
    }else {
        printf("Not a Palindrome");
    }

    return 0;

}
#include <stdio.h>
int main() {
    int mark;
    scanf("%d",&mark);
    if(mark >= 75 && mark<90){
        printf("Grade B");
    }
    else{
        printf("Not a grade B");
    }
    return 0;
}
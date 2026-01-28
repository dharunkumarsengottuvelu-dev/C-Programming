#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    printf("Enter the option:");
    int opt;
    scanf("%d",&opt);

    switch (opt)
    {
    case 1:
        if(a<=100){
        int aa=a*3;
        printf("%d",aa);
        }
        else {
           int  bi=((100*3)+(a-100)*5);
           int final=bi-80;
           printf("Bill %d",final);
        }
        break;

    case 2:
        if(a<=100){
            int d=a*7;
            printf("%d",d);
        }else{
           int  bi=(100*7)+((a-100)*10);
            printf(" Bill %d",bi); 
        }
        break;
    default:
        printf("invalid input");
        break;
    }
}

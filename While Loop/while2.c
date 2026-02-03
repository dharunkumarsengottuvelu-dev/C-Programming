#include <stdio.h>
int main()
{
    int days,finalBal;
    scanf("%d %d", &days, &finalBal);
    int i =1;
    int n;
    int fb=0,sum=0,sum1;
    int count = 0;
    while(i<=days)
    {
        scanf("%d", &n);
        if(n>0)
        {
            sum = sum + n;
            count++;
        }else{
            sum1 = sum1 + n;
            
        }
        i++;
    }
    fb = finalBal + (sum1 + sum);
    //fb = sum;
    //fb = sum1;
    printf("Final Balance: %d\n",fb);
    printf("Low Balance Days: %d",count);
    return 0;
}
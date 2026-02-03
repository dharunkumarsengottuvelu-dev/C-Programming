#include <stdio.h>

int main()
{
    int cash,n;
    scanf("%d",&cash);
    scanf("%d",&n);

    int i=0,x,count=0;

    while(i<n)
    {
        scanf("%d",&x);
        if(cash<x)
            break;
        cash-=x;
        count++;
        i++;
    }

    printf("Successful Withdrawals: %d\n",count);
    printf("Remaining Cash: %d",cash);
    return 0;
}

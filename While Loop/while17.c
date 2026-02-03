#include <stdio.h>

int main()
{
    int bal,n;
    scanf("%d",&bal);
    scanf("%d",&n);

    int i=0,x,count=0;

    while(i<n)
    {
        scanf("%d",&x);
        if(bal<x)
            break;
        bal-=x;
        count++;
        i++;
    }

    printf("Successful Purchases: %d\n",count);
    printf("Final Balance: %d",bal);
    return 0;
}

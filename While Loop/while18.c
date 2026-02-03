#include <stdio.h>

int main()
{
    int cap,n;
    scanf("%d",&cap);
    scanf("%d",&n);

    int i=0,x;
    int safe=0,fail=0;

    while(i<n)
    {
        scanf("%d",&x);
        if(x<=cap)
            safe++;
        else
            fail++;
        i++;
    }

    printf("Safe Hours: %d\n",safe);
    printf("Failure Count: %d",fail);
    return 0;
}

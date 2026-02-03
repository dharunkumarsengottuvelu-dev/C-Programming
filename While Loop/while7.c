#include <stdio.h>

int main()
{
    int cap,n;
    scanf("%d",&cap);
    scanf("%d",&n);

    int i=0,x;
    int occ=0,crit=0;

    while(i<n)
    {
        scanf("%d",&x);
        occ+=x;
        if(occ>cap*0.9)
            crit++;
        i++;
    }

    printf("Final Occupied Beds: %d\n",occ);
    printf("Critical Hours: %d",crit);
    return 0;
}

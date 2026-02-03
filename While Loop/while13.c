#include <stdio.h>

int main()
{
    int data,n;
    scanf("%d",&data);
    scanf("%d",&n);

    int i=0,x,day=-1;

    while(i<n)
    {
        scanf("%d",&x);
        data-=x;
        if(data<=0 && day==-1)
            day=i+1;
        i++;
    }

    if(day==-1)
        printf("Exhausted Day: Not Exhausted\n");
    else
        printf("Exhausted Day: %d\n",day);

    if(data<0)
        printf("Overused Data: %d",-data);
    else
        printf("Overused Data: 0");

    return 0;
}

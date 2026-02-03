#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i=0,x;
    int total=0,days=0;

    while(i<n)
    {
        scanf("%d",&x);
        total+=x;
        if(x>2)
            days++;
        i++;
    }

    printf("Total Delay: %d\n",total);
    printf("Delayed Days: %d",days);
    return 0;
}

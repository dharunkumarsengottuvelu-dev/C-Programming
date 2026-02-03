#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i=0,x;
    int cur=0,max=0;

    while(i<n)
    {
        scanf("%d",&x);
        if(x==0)
        {
            cur++;
            if(cur>max)
                max=cur;
        }
        else
            cur=0;
        i++;
    }

    printf("Longest Failure Streak: %d",max);
    return 0;
}

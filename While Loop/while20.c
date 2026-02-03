#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    int prev,cur;
    int drops=0,streak=0,crashDay=0;

    scanf("%d",&prev);

    while(i<n)
    {
        scanf("%d",&cur);

        if(cur < prev)
        {
            drops++;
            streak++;
            if(streak == 3 && crashDay == 0)
                crashDay = i+1;
        }
        else
            streak = 0;

        prev = cur;
        i++;
    }

    if(crashDay == 0)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n",crashDay);

    printf("Total Drops: %d",drops);

    return 0;
}

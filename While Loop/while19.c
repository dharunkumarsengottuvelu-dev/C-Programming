#include <stdio.h>

int main()
{
    int maxCapacity,n;
    scanf("%d",&maxCapacity);
    scanf("%d",&n);

    int i=0,x;
    int treated=0,rejected=0;

    while(i<n)
    {
        scanf("%d",&x);

        if(treated < maxCapacity)
        {
            if(treated + x <= maxCapacity)
                treated += x;
            else
            {
                rejected += (treated + x - maxCapacity);
                treated = maxCapacity;
            }
        }
        else
            rejected += x;

        i++;
    }

    printf("Treated Patients: %d\n",treated);
    printf("Rejected Patients: %d",rejected);

    return 0;
}

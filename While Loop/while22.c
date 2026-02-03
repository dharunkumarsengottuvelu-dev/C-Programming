#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 1;
    int x;
    int fail = 0;
    int consec = 0;
    int lock = 0;

    while (i <= N)
    {
        scanf("%d", &x);

        if (x == 0)
        {
            fail++;
            consec++;
        }
        else
        {
            consec = 0;
        }

        if (consec == 3 && lock == 0)
            lock = i;

        i++;
    }

    if (lock == 0)
        printf("Lock Triggered At Attempt: Not Locked\n");
    else
        printf("Lock Triggered At Attempt: %d\n", lock);

    printf("Total Failed Attempts: %d\n", fail);

    return 0;
}

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 1;
    int x;
    int high = 0;
    int consec = 0;
    int fraud = 0;

    while (i <= N)
    {
        scanf("%d", &x);

        if (x >= 50000)
        {
            high++;
            consec++;
        }
        else
        {
            consec = 0;
        }

        if (consec == 3 && fraud == 0)
            fraud = i;

        i++;
    }

    if (fraud == 0)
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    else
        printf("Fraud Triggered At Attempt: %d\n", fraud);

    printf("High-Value Transactions: %d\n", high);

    return 0;
}

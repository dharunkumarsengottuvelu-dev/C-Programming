#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 1;
    int x;
    int unsafe = 0;
    int consec = 0;
    int breakdown = 0;

    while (i <= N)
    {
        scanf("%d", &x);

        if (x > 70)
        {
            unsafe++;
            consec++;
        }
        else
        {
            consec = 0;
        }

        if (consec == 3 && breakdown == 0)
            breakdown = i;

        i++;
    }

    if (breakdown == 0)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n", breakdown);

    printf("Unsafe Readings: %d\n", unsafe);

    return 0;
}

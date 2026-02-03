#include <stdio.h>

int main()
{
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);

    int i = 1;
    int burn;
    int emergency = 0;
    int wasted = 0;

    while (i <= N)
    {
        scanf("%d", &burn);

        fuel -= burn;

        if (fuel < 0 && emergency == 0)
        {
            emergency = i;
            wasted = -fuel;
        }

        i++;
    }

    if (emergency == 0)
        printf("Emergency Stage: Not Occurred\n");
    else
        printf("Emergency Stage: %d\n", emergency);

    printf("Fuel Wasted: %d\n", wasted);

    return 0;
}

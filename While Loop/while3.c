#include <stdio.h>

int main() {
    int totalData, N;
    int used = 0;
    int daysUsed = 0;

    scanf("%d", &totalData);
    scanf("%d", &N);

    int i = 0;
    while (i < N) {
        int dailyUsage;
        scanf("%d", &dailyUsage);

        if (used + dailyUsage > totalData) {
            break;   
        }

        used += dailyUsage;
        daysUsed++;
        i++;
    }

    int remainingData = totalData - used;
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", remainingData);

    return 0;
}

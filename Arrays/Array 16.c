#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int price[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }

    int minp = price[0];
    int maxpro = price[1] - price[0];

    for (int i = 1; i < n; i++) {
        int pro = price[i] - minp;

        if (pro > maxpro) {
            maxpro = pro;
        }
        if (price[i] < minp) {
            minp = price[i];
        }
    }
    printf("%d", maxpro);
    return 0;
}

#include <stdio.h>

int main() {
    int totalData, N;
    int i = 0;
    int dailyUsage;
    int daysUsed = 0;

    scanf("%d", &totalData);
    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &dailyUsage);

        if (totalData >= dailyUsage) {
            totalData -= dailyUsage;
            daysUsed++;
        } else {
            break;   
        }

        i++;
    }

    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);

    return 0;
}

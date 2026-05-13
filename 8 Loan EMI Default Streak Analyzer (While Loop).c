#include <stdio.h>

int main() {
    int N;
    int payment;
    int currentStreak = 0, longestStreak = 0;
    int i = 0;

    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &payment);

        if(payment == 0) {
            currentStreak++;

            if(currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }

        i++;
    }

    printf("Longest Default Streak: %d\n", longestStreak);

    return 0;
}
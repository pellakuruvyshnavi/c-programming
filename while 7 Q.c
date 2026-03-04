#include <stdio.h>

int main() {
    int capacity, N;
    int i = 0;
    int change;
    int occupied = 0;
    int criticalCount = 0;

    // Input
    scanf("%d", &capacity);
    scanf("%d", &N);

    // While loop to process each hour
    while (i < N) {
        scanf("%d", &change);

        occupied += change;

        // Ensure occupied beds do not exceed capacity
        if (occupied > capacity) {
            occupied = capacity;
        }

        // Ensure occupied beds do not go below 0
        if (occupied < 0) {
            occupied = 0;
        }

        // Check if occupancy exceeds 90% of capacity
        if (occupied > (0.9 * capacity)) {
            criticalCount++;
        }

        i++;
    }

    // Output
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);

    return 0;
}

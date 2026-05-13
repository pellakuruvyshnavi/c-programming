#include <stdio.h>

int main() {
    int capacity, N;
    int change;
    int occupied = 0;
    int criticalHours = 0;
    int i = 0;

    scanf("%d", &capacity);
    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &change);

        occupied = occupied + change;

        
        if(occupied < 0) {
            occupied = 0;
        }

    
        if(occupied > (0.9 * capacity)) {
            criticalHours++;
        }

        i++;
    }


    if(occupied > capacity) {
        occupied = capacity;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalHours);

    return 0;
}
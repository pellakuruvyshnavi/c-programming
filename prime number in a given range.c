
#include<stdio.h>
int main() {
    int start, end, i, j, isPrime;

    scanf("%d %d",&start,&end);
     printf("Enter range: ");


    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, arr[100], i;
    int start = 0, end, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    end = n - 1;

    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
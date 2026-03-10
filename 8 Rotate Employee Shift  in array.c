#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100], temp[100];

    
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &k);

    
    for(i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    
    for(i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    
    for(i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
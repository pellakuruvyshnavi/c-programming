#include <stdio.h>

int main() {
    int n, i, arr[100], flag = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
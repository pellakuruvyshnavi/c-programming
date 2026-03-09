#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int i,j,ok;

    for(i=0;i<n;i++){
        ok=0;

        for(j=0;j<i;j++){
            if(arr[j]==arr[i]){
                ok=1;
                break;
            }
        }

        if(ok && arr[i]!=-1){
            arr[i]=-1;
        }

        printf("%d ",arr[i]);
    }

    return 0;
}
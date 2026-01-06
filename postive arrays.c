#include <stdio.h>
int main() {
    int n,i,count=0;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i < n;i++){
scanf("%d",&a[i]);
        if (a[i] > 0){
            count++;
    }
    }

    printf("%d",count);
        
    
    return 0;
}
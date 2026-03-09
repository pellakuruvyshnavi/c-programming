#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int expected=n*(n+1)/2;
int sum =0;
for(i=0;i<n-1;i++){
    sum=sum+a[i];
}printf("%d",expected-sum);
    return 0;
}
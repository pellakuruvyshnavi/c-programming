#include <stdio.h>
int digit(int n){
int count=0;
/*while(n!=0){
    int rev=n%10;
    n=n/10;
    count++;}
    return count;
    */
    for(;n!=0;n/10){
        int rev=n%10;
        n=n/10;
        count++;
    }return count;
    }
int main() {
    int n;
    scanf("%d",&n);
    int x=digit(n);
    printf("%d",x);
    return 0;
}
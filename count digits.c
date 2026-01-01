#include <stdio.h>
int main() {
    int n,count =0;
    scanf("%d",&n);
      while (n!=10){
          count++;
          n=n/10;

        printf("%d",n);
    
      }
    return 0;
}
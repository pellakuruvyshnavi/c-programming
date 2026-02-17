#include <stdio.h>
int main() {
   int n,k,power = 1 ;
   printf("Enter a number  ");
   scanf("%d",&n);
   printf("Enter a number  ");
   scanf("%d",&k);

   for (int i=0;i<=n;i++){
        
       power=power * n;
   }
   printf("the value of   %d^ %d is %d",n,k,power);   
   
    return 0;
}
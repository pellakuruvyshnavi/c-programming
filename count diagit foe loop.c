#include <stdio.h>
int main() {
    int n,count=0;
    printf("Enter a number ");
    scanf("%d",&n);
  while(n!=0){
         //int r=n%10;
        count++;
        n=n/10;
  }  
  printf("%d",count);
    
    return 0;
}
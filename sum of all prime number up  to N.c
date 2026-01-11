#include <stdio.h>
#include <string.h>
int main() {
     int n,i ,j,sum=0,prime;
     scanf("%d" ,&n);
     for(i=2;i<=n;i++){
        prime =1;
        for (j=2; j<=i/2 ;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
     }
    if (prime==1){ 
        sum=sum+i;
    }


     printf("prime number: %d",sum);
    return 0;
}
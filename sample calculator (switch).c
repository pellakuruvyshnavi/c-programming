#include <stdio.h>
int main() {
    int a,b,n;
    printf("\n1.addition(+)");
    printf("\n2.subtraction(-)");
    printf("\n3.multiplication(*)");
    printf("\n4.division(/)");

    scanf("%d",& n);
    printf("Enter the values\n ");
    scanf("%d %d",&a,&b);
    switch(n) {
    case 1 :
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 2: 
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        printf("%d*%d= %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d = %d",a,b,a/b);
        break;
  default :
   printf("\n Enter the  correct value  ") ; 
    }
    
    return 0;
}
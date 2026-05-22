#include <stdio.h>
int main() {
    int A =5020;
    int ONES_DIGIT,TENS_DIGIT;
     ONES_DIGIT = A%10;
      printf("The ONES_DIGIT =%d \n",ONES_DIGIT);
       TENS_DIGIT= A/10;
       int tens=TENS_DIGIT%10;
      printf("The TENS_DIGIT=%d \n",tens);
      int THIRDY_DIGIT =A/100;
int num=THIRDY_DIGIT%10;
      printf("The THIRDY_DIGIT = %d \n ",num);
    int  FOURTH_DIGIT=A/1000;
    printf("The FOURTH_DIGIT=%d\n",FOURTH_DIGIT);
    
    return 0;
}
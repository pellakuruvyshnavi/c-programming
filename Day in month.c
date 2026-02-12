#include <stdio.h>
int main() {
    int month;
    scanf("%d",&month);
    printf("Enter a month=  ");

    switch(month){
case 1:
     printf("jan 1 to 31 days");
     break; 
  case 2:
       printf("Feb 28 or 29 days");
       break;
   case 3:
       printf("march  1 to 31");
       break;
    case 4:
        printf("Aprli ");
        break;
    case 5:
         printf("May");
         break;                
case 6:
      printf("june");
      break;
  case 7:
         printf("july");
         break;
   case 8:
         printf("aug");
         break;
    case 9:
         printf("sep");
         break;
     case 10:
        printf("oct");
              break;
      case 11:
      printf("nov");
      break;
   case 12:
        printf("dec");
        break;
 default:
       printf("Enter the months ");
    }
    
    return 0;
}
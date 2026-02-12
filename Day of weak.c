#include <stdio.h>
int main() {
    int day;
    scanf("%d",&day);
    printf("Enter a day=  ");

    switch(day){
case 1:
      printf("mon day");
      break;
  case 2:
         printf("tues day");
         break;
   case 3:
         printf("wedness day");
         break;
    case 4:
         printf("Thurs day");
         break;
     case 5:
        printf("Fri day");
              break;
      case 6:
      printf("satur day");
      break;
   case 7:
        printf("Sun day");
        break;
 default:
       printf("Enter the day ");
    }
    
    return 0;
}
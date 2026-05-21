#include <stdio.h>
int main() {
   /*local variable defination*/
    char grade ='F';
    switch (grade){
        case 'A':
          printf("Excellent \n");
          break;
          case 'B':
          case 'c':
          printf(" Well done \n");
          break;
          case 'D':
          printf("you passed \n");
          break;
          case 'f':
          printf("Better try again \n");
          break;
          //case 'F':
                  default :

          printf("Invalid grade \n");
          //break;
        //default :
         printf("your grade is %c \n",grade );
         return 0;

    } 
    
    return 0;
}
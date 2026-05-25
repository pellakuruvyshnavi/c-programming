#include <stdio.h>
#include <ctype.h>
#define SIZE 10
int main() {
    char letter[SIZE];

     int count;
     /*read  in the line */

      for (count=0; count<SIZE; ++count){

      
      letter[count]=getchar();
      }
      /*display the line in upper case*/

      for(count=0; count<SIZE ; ++count){
        putchar(toupper(letter[count]));
      }
    return 0;
}
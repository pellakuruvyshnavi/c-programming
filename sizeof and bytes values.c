#include <stdio.h>
int main() {
     /*understanding ; he size of integer */ 
      int I;
      char C;
      float F;
      long L;
      double D;
      unsigned int S;

      printf ("the size of integer=   %d  BYTES \n\n", sizeof(I));
      printf("the size of charactetr is  %d    BYTES \n\n", sizeof(C));
      printf("the size of float is  %d    BYTES \n\n",sizeof(F));
      printf("the size of long is  %d    BYTES \n\n", sizeof(L));
      printf("the size of double is    %d BYTES\n\n",sizeof(D));
      printf ("the size of unsigned int is  %d BYTES\n\n",sizeof(S));



    return 0;
}
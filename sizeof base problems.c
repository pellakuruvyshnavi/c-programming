#include <stdio.h>
int main() {
     /*understanding ; he size of integer */

     
      int I;
      char C;
      float F;
      long L;
      double D;
      unsigned int S;

      printf("INTEGER |S= %d BYTES \n\n",sizeof(I));
      printf(" CHARATER |S=  %d BYTES \n\n",sizeof(C));
      printf ("FLOAT |S = %d BYTES \n\n ",sizeof(F));
      printf ("DOUBLE |S=  %d  BYTES \n\n ",sizeof(D));
      printf("LONG |S=  %d   BYTES \n\n",sizeof(L));
      printf ("UNSIGNED  |S= %d BYTES \n\n", sizeof(S));
      



    return 0;
}
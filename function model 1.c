#include <stdio.h>
#define COLMAX 10
#define ROWMAX 20
int main(){
     int row,column,y;
     row=1;
     printf("Multiplication Table \n");

     printf("========================\n");

     do /*outerloop start*/
       {
        column=1;

         do/*innerloop start*/
       {

        y=row*column;
        printf("%5d",y);
        column=column+1;

       }
       while(column<=COLMAX);/*INNER LOOPOVER*/
       printf("\n");
       row=row+1;
}
 while(row<=ROWMAX);
 printf("====================================================");




   /* float area;
    printf()



    printf("THE MINIMUM VALUE OF FLOAT IS =%f\n\n",FLT_MIN);
    printf("THE MAXIMUM VALUE OF FLOAT IS =%f\n\n",FLT_MAX);

    printf("THE MINIMUM VALUE OF INTEGER IS = %d\n\n",INT_MIN);
    printf("THE MAXIMUM VALUE OF INTEGER IS = %d\n\n",INT_MAX);
*/

return 0;
}
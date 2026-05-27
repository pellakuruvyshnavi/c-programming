#include <stdio.h>
int main() {
     char v;
     int r;
     float p,h;

     v='V';
     r=144;
     p=10.25,h=18.89;
     printf("%c is stored at addr %u.\n",v,&v);
     printf("%d is stored at addr %u.\n",r,&r);
     printf("%f is stored at addr %u.\n",p,&p);
          printf("%f is stored at addr %u.\n",h,&h);





    return 0;


}
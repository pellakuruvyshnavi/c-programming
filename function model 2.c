#include <stdio.h>
int add(int a,int b,int c,int d){
    int z=a+b+c+d;
    return z;
    }

int mul(int a,int b,int c,int d){
        int s=a*b*c*d;

    return s;
}
int sub(int a,int b,int c,int d){
    int x=a-b-c-d;
    return x;
    }

    int div(int a,int b,int c,int d){
            int e=a/b/c/d;

    return e;
    }int power(int a,int b,int c,int d){
        int h=(a^b)+(c^d);
        return h;
    }

    
    //return z,s,x,e;

    /*printf("%d\n",z);
    printf("%f\n",s);
    printf("%d\n",x);
    printf("%d\n",e);*/



int main() {
    
int a,b,c,d;
printf("enter the float numberers: ");
scanf("%d%d%d%d",&a,&b,&c,&d);
int  m;
m=add(a,b,c,d);
printf("%d\n",m);
int n=mul(a,b,c,d);
printf("%d\n",n);
int o=sub(a,b,c,d);
printf("%d\n",o);
int p=div(a,b,c,d);
printf("%d\n",p);
int q=power(a,b,c,d);
printf("%d\n",q);
//var(a,b,c,d)
;
    return 0;
}
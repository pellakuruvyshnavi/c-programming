#include <stdio.h>
//int main() {
     struct class
     {
        int number ;
        char name[20];
        float marks;

     };
    int main(){
      // int X;
       struct class student1 ={111,"vyshu",30.0};
       struct class student2 ={222,"pranathi",67.0};
       struct class student3;  
 
     student3=student2;

        int x=((student3.number==student2.number)&&(student3.marks==student2.marks)) ? 1:0;

if(x==1){
    printf("\n student2 and student3 are same\n\n");
    printf("%d %s %f\n",student3.number,student3.name,student2.marks);
}
else {
printf("\nstudent2 and student3 are different\n\n");
}
return 0;

      }

    
    

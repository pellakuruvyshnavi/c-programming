#include <stdio.h>
int main(){
/*int n;
scanf("%d",&n);
int a[n];
int sum=0;
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}for(int i=0;i<n;i++){
sum=sum+a[i];
}
printf("enter thr total marks of %d\n",sum);
int avg=sum/2;
printf("the average percentage of %d\n",avg);*/

 /* int subjects;
   int PYTHON,FIS,DSC,MATHS;
   printf("Enter a marks PYTHON: ");
   scanf("%d",&PYTHON);
   printf("Enter a marks FIS: ");
   scanf("%d",&FIS);
   printf("Enter a marks DSC: ");
   scanf("%d",&DSC);
   printf("Enter a marks MATHS:  ");
   scanf("%d",&MATHS);
   subjects= PYTHON,FIS,DSC,MATHS;
     printf("enter thr total   marks of %d\n",subjects);
int avg= (PYTHON,DSC,FIS,MATHS)/2;
printf("the average percentage of %d\n",avg); */
    




  /*  int subjects, i;
    float mark, sum = 0, average;
    char result[50];

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for(i = 1; i <= subjects; i++) {
        printf("Enter mark %d: ", i);
        scanf("%f", &mark);
        sum += mark;
    }

    average = sum / subjects;
    sprintf(result, "Average = %.2f", average);

    printf("%s\n", result); */



    

    char name[20];
    printf("enter the name:" );
    fgets(name,20,stdin);


    int tel,hin,eng,mat,sci,soc;
    printf("the student name is %s\n: ",name);
    printf("enter the marks tel\n: ");
scanf("%d",&tel);
    printf("enter the marks hin\n: ");
    scanf("%d",&hin);
    printf("enter the marks eng\n: ");
    scanf("%d",&eng);
    printf("enter the marks mat\n: ");
    scanf("%d",&mat);
    printf("enter the marks sci\n: ");
    scanf("%d",&sci);
    printf("enter the marks soc\n: ");
    scanf("%d",&soc);

    
int sum=tel+hin+eng+mat+sci+soc;
printf(" the  total marks in all subject is:%d\n",sum);
float avg=(tel+hin+eng+mat+sci+soc)/2;
printf(" the average marks is :%.2f\n\n\n",avg);



    printf("the report card of %s\n: ",name);

    printf("the mark gained in tel:%d\n",tel);
    printf("the mark gained in hin:%d\n",hin);
    printf("the mark gained in eng:%d\n",eng);
    printf("the mark gained in mat:%d\n",mat);
    printf("the mark gained in sci:%d\n",sci);
    printf("the mark gained in soc:%d\n",soc);

    printf("average all subject is:%d/120\n",sum);
if(sum<100 && sum>120){
 printf("the student name is %s\n: ",name);
printf("the grade is A");

}else if(sum<=70 && sum>=99){
        printf("the student name is %s\n: ",name);
printf("the grade is B");
}else{
        printf("the student name is %s: ",name);
 printf("the grade is C");
}
printf("\n\n");
    

    return 0;
}
    

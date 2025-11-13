#include<stdio.h>
#include<string.h>
struct student{
int roll;
float cgpa;
char name[100];
};
int main(){
struct student s1;
s1.roll = 2580185;
s1.cgpa = 9.8;
strcpy(s1.name,"rahul kumawat");
printf("student name = %s\n",s1.name);
printf("student roll no = %d\n",s1.roll);
printf("student cgpa = %f\n",s1.cgpa);
struct student s2;
s2.roll = 2580186;
s2.cgpa = 9.5;
strcpy(s2.name,"shiv lal kumawat");
printf("student name = %s\n",s2.name);
printf("student roll no = %d\n",s2.roll);
printf("student cgpa = %f\n",s2.cgpa);
struct student s3;
s3.roll = 2580188;
s3.cgpa = 9.0;
strcpy(s3.name,"rakesh kumawat");
printf("student name = %s\n",s3.name);
printf("student roll no = %d\n",s3.roll);
printf("student cgpa = %f\n",s3.cgpa);
 return 0;
}
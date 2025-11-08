#include<stdio.h>
#include<stdio.h>
struct student {
int roll;
float cgpa;
char name[100];
};
int main(){
struct student ece[100];
ece[0].roll = 1664;
ece[0].cgpa = 9;
strcpy(ece[0].name,"rahul");
printf("name = %s\n",ece[0].name);
printf("cgpa = %f\n",ece[0].cgpa);
printf("roll = %d\n",ece[0].roll);
return 0;
}
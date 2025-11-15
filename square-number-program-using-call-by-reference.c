#include<stdio.h>
void square(int*n);
int main(){
int number;
printf("enter a number");
scanf("%d",&number);
square(&number);
return 0;
}
void square(int*n){
*n=(*n)*(*n);
printf("square = %d\n",*n);
}
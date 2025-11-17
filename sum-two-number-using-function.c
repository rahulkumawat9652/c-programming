#include<stdio.h>
int main(){
int a,b;
printf("enter number a");
scanf("%d",&a);
printf("enter number b");
scanf("%d",&b);
int S = sum(a,b);
printf("sum is %d",S);
return 0;
}
int sum(int x,int y){
return x+y;
}

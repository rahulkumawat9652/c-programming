#include<stdio.h>
int main(){
int a[50],n,i;
float sum = 0,avg;
printf("enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
sum = sum + a[i];
}
avg = sum/n;
printf("Average = %f",avg);
return 0;
}
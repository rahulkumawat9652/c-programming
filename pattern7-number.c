//pattern number
#include<stdio.h>
int main(){
int i,j;
for(i=5;i>=1;i--){
for(j=2*i-i;j>=1;j--){
printf("%d\t",i);
}
printf("\n");
}
return 0;
}
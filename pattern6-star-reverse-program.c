#include<stdio.h>
int main(){
int i,j;
for(i=5;i>=1;i--){
for(j=5;j>(2*i)-i;j--){
printf(" ");
}
for(j=1;j<=(2*i)-i;j++){
printf("* ");
}
printf("\n");
}
return 0;
}
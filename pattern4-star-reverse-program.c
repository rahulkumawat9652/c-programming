#include<stdio.h>
int main(){
int i,j,k,p,q,r;
for(i=1;i<=5;i++){
for(j=5;j>=i;j--){
printf(" ");    
}
for(k=1;k<=(2*i)-1;k++){
printf("*");
}
printf("\n");
}
for(p=4;p>=1;p--){
for(q=5;q>=p;q--){
printf(" ");
}
for(r=1;r<=(2*p)-1;r++){
printf("*");
}
printf("\n");
}
return 0;
}
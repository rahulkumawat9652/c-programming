#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr = (float *) malloc(5*sizeof(float));
ptr[0] =1;
ptr[1] =3;
ptr[2] =4;
ptr[3] = 8;
ptr[4] = 10;
for(int i=0;i<5;i++){
printf("%d\n",ptr[i]);
}
return 0;
}
#include<stdio.h>
int main(){
int arr[5] = {10,20,30,40,50};
int *ptr = arr;
printf("Array in reverse \n");
for (int i=4; i>=0; i--){
printf("%d\n",*(ptr + i));
}
return 0;
}
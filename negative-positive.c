#include<stdio.h>
int main(){
    int number;
    printf("enter number");
    scanf("%d",&number);
if(number >= 0){
    printf("positive\n");
}
else{
    printf("negative\n");
}
return  0;
}
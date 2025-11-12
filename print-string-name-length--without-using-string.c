#include<stdio.h>
int main(){
char str[50];
int length = 0;
printf("enter the string");
gets(str);
while(str[length] !='\0')
length++;
printf("length = %d",length);
return 0;
}
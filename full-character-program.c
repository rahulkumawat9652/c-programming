#include<stdio.h>
void printString(char arr[]);
int main(){
char str[100];
fgets(str, 100,stdin);
puts(str);
return 0;
}
#include<stdio.h>
void printNamaste();
void printBojour();
int main(){
char ch;
printf("enter i for Indian & f for French");
scanf("%c",&ch);
if(ch=='i'){
printNamaste();
}else if(ch == 'f'){
printBojour();
}
return 0;
}
void printNamaste(){
printf("Namaste");
}
void printBojour(){
printf("Bojour");
}
#include<stdio.h>
#include<stdio.h>
void checkChar(char str[],char ch);
int main(){
char str[] = "rahul kumawat";
char ch = 'x';
checkChar(str,ch);
}
void checkChar(char str[],char ch){ 
for(int i=0; str[i] != '\0'; i++){
if(str[i] == ch){
printf("charactre is present");
return 0;
}
}
printf("character is not present");
}
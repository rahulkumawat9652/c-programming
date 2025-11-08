#include<stdio.h>
int main() {
FILE *fptr;
fptr = fopen("text.c","a");
fscanf(fptr,"%c",'r');
fscanf(fptr,"%c",'a');
fscanf(fptr,"%c",'h');
fscanf(fptr,"%c",'u');
fscanf(fptr,"%c",'l');
fclose(fptr);
return 0;
}

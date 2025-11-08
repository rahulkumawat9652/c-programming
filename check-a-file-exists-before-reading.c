#include <stdio.h>
int main() {
FILE *fptr;
fptr = fopen("hello.c","r");
if (fptr == NULL) {
printf("file exist\n");
} else
printf("file does not  exist\n");
fclose(fptr);
return 0;
}

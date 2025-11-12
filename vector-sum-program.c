#include <stdio.h>
struct vector {
int x;
int y;
};
struct vector calcSum(struct vector v1, struct vector v2);
int main() {
struct vector v1 = {5, 10};
struct vector v2 = {3, 7};
struct vector sum;
sum = calcSum(v1, v2);  
printf("Sum of x is %d\n", sum.x);
printf("Sum of y is %d\n", sum.y);
return 0;
}
struct vector calcSum(struct vector v1, struct vector v2) {
struct vector result;
result.x = v1.x + v2.x;
result.y = v1.y + v2.y;
return result; 
}

#include<stdio.h>
#include<math.h>
float rectangleArea(float a, float b);

int main(){
float a=5.0;
float b=10.0;

printf("area is %f\n", rectangleArea(a,b));
return 0;
}

float rectangleArea(float a, float b){
    return a*b;
}
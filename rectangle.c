#include<stdio.h>
#include<math.h>

float reactangleArea(float a, float b);

int main(){
float a = 5.0;
float b = 10.0;

printf("area is : %f", reactangleArea(a,b));

return 0;

}

float reactangleArea(float a, float b){
    return a * b;
}
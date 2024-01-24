#include<stdio.h>

int calcPercentage(int science, int math, int english);

int main() {
    int sc = 98;
    int math = 95;
    int english = 99;

    printf("percentage is : %d", calcPercentage(sc, math, english));
    return 0;

}

int calcPercentage(int science, int math, int english){
     return((science + math + english) / 3);
} 
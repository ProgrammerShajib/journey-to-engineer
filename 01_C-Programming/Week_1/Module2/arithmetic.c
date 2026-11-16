#include <stdio.h>
#include <math.h>

int main(){
    // + - * / % 

    float a = 10;
    int b = 3;

    int sum = a + b; 
    printf("Sum = %d \n" , sum);

    int sub = a - b; 
    printf("Subtraction = %d \n" , sub);

    int mul = a * b; 
    printf("Multiplication = %d \n" , mul);

    float div = a / b; 
    printf("Division = %f \n" , div);

    float mod = fmod(a , b); 
    printf("Modulas = %f " , mod);

    // printf("Sum = %d + %d = %d" , sum);

    return 0;
}
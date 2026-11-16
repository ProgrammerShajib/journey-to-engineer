#include <stdio.h>

int sum(int num1, int num2){

    int total = num1 + num2;
    return total;
}
int sub(int num1, int num2){

    int total = num1 - num2;
    return total;
}
int mul(int num1, int num2){

    int total = num1 * num2;
    return total;
}

int div(int num1, int num2){

    int total = num1 / num2;
    return total;
}
int mod(int num1, int num2){

    int total = num1 % num2;
    return total;
}
int function_under_main_function(int val);  // if we write a function under main function then we need to initialize the finction before main() function first . Otherwise it will show error in the code or not run by the compiler 
int main(){

    int val = sum(10, 20);
    int val2 = sub(10, 20);
    int val3 = mul(10, 20);
    int val4 = div(10, 20);
    int val5 = mod(10, 20);
    printf("Sum = %d\n", val);
    printf("sub = %d\n", val2);
    printf("mul = %d\n", val3);
    printf("div = %d\n", val4);
    printf("mod = %d\n", val5);
    int test =  function_under_main_function(33);
    printf("%d", test);
    return 0;
}


int function_under_main_function(int val){

    return val+1;
    
}
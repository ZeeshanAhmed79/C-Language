#include<stdio.h>

int main(){
    int a; 
    scanf("%d", &a);
    printf("The value of a is %d", a);
    return 0;
}

// 'printf' is used for output, while 'scanf' is used for input
// '&' is used to get the address of the variable where the input value will be stored
// '%d' is a format specifier used for integers
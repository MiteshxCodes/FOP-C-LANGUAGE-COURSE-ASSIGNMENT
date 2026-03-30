#include <stdio.h>

int multiplication(int a, int b);   

int main() {
    int a, b, result;

    printf("Enter a: \n");
    scanf("%d", &a);

    printf("Enter b: \n");
    scanf("%d", &b);

    result = multiplication(a, b);  

    printf("Multiplication = %d\n", result);

    return 0;
}

int multiplication(int a, int b) {  
    return a * b;
}

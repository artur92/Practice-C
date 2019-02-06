#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result =0;
    result = b & a; //0000 1100 = 12
    printf("El valor del & es: %d \n", result);
    result = b | a ; //0011 1101 61
    printf("El valor del | es: %d \n", result);
     result = b ^ a ; //0011 0001 49
    printf("El valor del ^ es: %d \n", result);
     result = ~a; // Agrega un bit extra para el negativo
    printf("El valor del ~ de a es: %d \n", result);
    result = a << 2; //1111 0000 Shift to the right
    printf("El valor del << shift to the right es: %d \n", result);
    result = a >> 3; //0000 1111  Shift to the right
    printf("El valor del >> shift to the right es: %d \n", result);

    printf("Hello world!\n");
    return 0;
}

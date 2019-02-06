#include <stdio.h>
#include <stdlib.h>

/*
Los parametreos queu se ponene en el main corresponden a los argumento que se pasan al programa cuando se ejecutan
el primero parametro indica el numero de argumentos que se estan pasando y el segundo corresponde a los valores que
se pasan. arc significa arguments count
*/
int main(int argc, char *argv[] )
{
    #include <stdio.h>
    int numberOfArguments = argc;

    char *argument1 = argv[1];
    char *argument2 = argv[2];
   printf("\n Number of arguments: %d \n", numberOfArguments);
   printf("The value of the argument1: %s \n", argument1);
   printf("The value of the argument2: %s\n", argument2);

    printf("Hello world!\n");
    return 0;
}

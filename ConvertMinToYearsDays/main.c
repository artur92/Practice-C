#include <stdio.h>
#include <stdlib.h>

int main()
{

    double numMin = 0, dayConver = 0, yearConv=0;
    printf("Cuantos minutos deseas convertir ? \n");
    scanf("%lf",&numMin);
    printf("El numero de minutos a convertir es: %lf \n", numMin);
    dayConver = numMin /(60*24);
    yearConv = numMin /(60*24*365);

    printf("La conversion a dias es: %lf \n la conversion a a;os es: %lf \n", dayConver, yearConv);
    return 0;
}

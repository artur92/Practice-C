#include <stdio.h>
#include <stdlib.h>

int main()
{
    double width, heigh, perimeter =0, area =0;
    printf("Width oof the Rectangle\n");
    scanf("%lf",&width);
    printf("Heigh of the rectanglue: \n");
    scanf("%lf", &heigh);
    perimeter = 2*(width+heigh);
    area = width * heigh;
    printf("El valor del del perimetro es: %f \nEl valor del area es: %f \n", perimeter, area);

    return 0;
}

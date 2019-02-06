#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    enum gender {male, female};
    enum gender myGender;
    myGender = male;
    enum gender otherGender = female;
    bool isMale = (myGender == otherGender);
    printf("%d", isMale);
    printf("\nHello world!\n");
    return 0;
}

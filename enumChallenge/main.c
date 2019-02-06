#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Type declaration
    enum company{GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    //Variable declaration
    enum company value1= XEROX, value2= GOOGLE, value3 = EBAY;
    //Prining the value of the variable
    printf("The value of XEROX: is %d\nThe value of GOOGLE is: %d\nThe value of EBAY is: %d\n",value1,value2,value3);
    printf("Hello world!\n");
    return 0;
}

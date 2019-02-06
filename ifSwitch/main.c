#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    double payment, tax;
    printf("Please tell us how many hour u work this week\n");
    scanf("%d", &hours);
    if( hours > 40)
        {
          //Over time is pay 18 per hour and normal payment is 12 per hour
          payment = (hours-40)*18+40*12;
          //printf("The number of overtime worked is %d \n", (hours-40)*18+40*12);

        }
    else
        {
            printf("No overtime worked, total amount of hours work this week %d \n", hours);
            payment = 12*hours;
        }

        if(payment >450)
        {
            tax = 300*0.15 + 150*0.2 + (payment - 450) *0.25;

           // printf("The 300: %f \n", 300*.15);
            //printf("The 150: %f \n", 150*.2);
           //= printf("The resto: %f \n", (payment - 450) *0.25);


        }
        else if(payment >= 300 && payment <= 450)
        {
            tax = 300*.15+ (payment-300) * .2;

        }
        else
        {
            tax = payment * .15;

        }


         printf("The total income before taxe is: %.2f \n", payment);
         printf("The total of  taxes is: %.2f \n", tax);
         printf("The total after  taxes is: %.2f \n", payment - tax);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(t));
    printf("This is guessing game !\n");
    printf("I have choosen a number between 0 to 20 which you must guess \n");
    int userNum, randomNum  = 0;
    randomNum = rand() %21;
    printf("The number random is %d \n", randomNum);

    for(int i = 0; i<= 5; i++)
    {
        printf("You have %d tries left \n",(5-i) );
        scanf("%d", &userNum);
       // printf("El numero ingresado es: %d \n", userNum);
       if(userNum > 20 )
        printf("Error the number should be less than 20 \n ");
       else if (userNum == randomNum)
        {
        printf("Correct congrats");
        break;
        }
        else if(userNum > randomNum)
            printf("Sorry, %d is wrong my number is less \n", userNum);
        else if(userNum < randomNum)
            printf("Sorry, %d is wrong my number is higer\n", userNum);




    }

    return 0;
}

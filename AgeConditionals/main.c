#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an = 17;
    int ao = 60;
    int input = 0;

    printf("Enter your age: ");
    scanf("%i",&input);

    if (input<=an){

        printf("\nAs the input age,it leads for a young person.\n");

    }else{

        if(input>=ao){

            printf("\nAs the input age,it leads for an older person.\n");

        }else{

           if((input>=an) && (input<=ao)){

                printf("\nAs the input age,it leads for a middle age person.\n");

           }

        }

    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;

    while(x<11){

        printf("msg\n");
        x += 1;
    }

    /*

    1) += -> sum
    2) -= -> subtraction
    3) *= -> multiplication
    4) /= -> division
    5) %= -> remainder

    */

    int y = 50;

    printf("\nSum: %i\n",y +=100);
    printf("Subtraction: %i\n",y -=50);
    printf("Multiplication: %i\n",y *=3);
    printf("Division: %i\n",y /=3);
    printf("Remainder: %i\n",y %=3);

    return 0;
}

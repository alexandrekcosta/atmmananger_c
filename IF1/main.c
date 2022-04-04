#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    printf("Enter a !=5 number: ");
    scanf("%i",&i);

    if(i!=5){


        printf("\nExpression equals:");
        printf("\nTRUE\n");

    }else{
        printf("\nExpression equals:");
        printf("\nFALSE\n");

    }
    return 0;
}

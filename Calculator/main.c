#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum,sub,multi,div;

    printf("CALCULATOR 1.0\n");
    printf(" \n");
    printf("Enter two numbers to process: ");
    scanf("%i%i",&n1,&n2);
    printf(" \n");

    sum = n1 + n2;
    sub = n1 - n2;
    multi = n1 * n2;
    div = n1 / n2;

    printf("RESULTS\n");
    printf(" \n");
    printf("Sum: %i\n",sum);
    printf("Subtraction: %i\n",sub);
    printf("Multiplication: %i\n",multi);
    printf("Division: %i\n",div);
    return 0;
}

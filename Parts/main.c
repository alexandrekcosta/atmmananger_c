#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
        printf("Part 1\n");
        double money = 3.50;
        printf("Money value equals: %f\n",money);

    }

    double value;

    printf("Enter money value: ");
    scanf("%lf",&value);

    if(value == 50)
    printf("\nIF PART\n");
    else{

    printf("\nELSE PART\n");

    }

    return 0;
}

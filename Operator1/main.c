#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;
    int d = 0;

    printf("\nEnter a letter between A and G: ");
    scanf("%c",&c);

    switch(c){

        case 'A':
            d = 67;
        break;

        case 'B':
            d = 68;
        break;

        case 'C':
            d = 69;
        break;

        case 'D':
            d = 70;
        break;

        case 'E':
            d = 71;
        break;

        case 'F':
            d = 72;
        break;

        case 'G':
            d = 73;
        break;

        default:
            d = -1;

    }

    printf("\nThe digit for that letter you entered equals: %i\n",d);

    return 0;
}
